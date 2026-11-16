// FUN_180603f3c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180603f3c */

undefined8 FUN_180603f3c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  bool bVar4;
  undefined1 local_78 [112];
  
  bVar4 = false;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined8 *)FUN_180454770(0x10);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        ppuVar3 = &PTR_180700558;
      }
      else {
        ppuVar3 = *(undefined ***)(lVar1 + 0x28);
        if (ppuVar3 == (undefined **)0x0) {
          ppuVar3 = (undefined **)(lVar1 + 0x30);
        }
      }
      FUN_180159fc0(local_78,ppuVar3);
      bVar4 = true;
      *(undefined4 *)(puVar2 + 1) = 0;
      *puVar2 = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
    }
    *param_1 = (longlong)puVar2;
    if (bVar4) {
      FUN_18015a070(local_78);
    }
  }
  return 4;
}



