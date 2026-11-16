// DumpDecomp.java - headless Ghidra script: decompile every function to one file.
//
// Output goes to the path in the DECOMP_OUT environment variable, defaulting to
// D:\re-tools\decompiled.c. One /* address */ header per function, then the
// decompiler's C. This is approximate source: names are synthetic, types are
// inferred, and nothing here compiles.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.BufferedWriter;
import java.io.FileWriter;

public class DumpDecomp extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = System.getenv("DECOMP_OUT");
        if (out == null || out.isEmpty()) {
            out = "D:\\re-tools\\decompiled.c";
        }

        DecompInterface dec = new DecompInterface();
        dec.setOptions(new ghidra.app.decompiler.DecompileOptions());
        dec.openProgram(currentProgram);

        int total = 0, done = 0, failed = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            total++;
            it.next();
        }

        try (BufferedWriter w = new BufferedWriter(new FileWriter(out), 1 << 20)) {
            w.write("// Decompiled from payload.clean.dll by Ghidra " +
                    currentProgram.getExecutableFormat() + "\n");
            w.write("// Approximate source. Function names and types are synthetic.\n");
            w.write("// This file does not compile and is not the original source.\n\n");

            FunctionIterator fns = currentProgram.getFunctionManager().getFunctions(true);
            while (fns.hasNext() && !monitor.isCancelled()) {
                Function f = fns.next();
                w.write("/* " + f.getEntryPoint() + " */\n");
                DecompileResults r = dec.decompileFunction(f, 60, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    w.write(r.getDecompiledFunction().getC());
                    done++;
                } else {
                    w.write("// decompile failed: " + f.getName() + "\n");
                    failed++;
                }
                w.write("\n\n");
                if ((done + failed) % 250 == 0) {
                    println("progress " + (done + failed) + "/" + total);
                }
            }
        }

        println("DumpDecomp: " + done + " functions written, " + failed + " failed, " +
                total + " total -> " + out);
    }
}
