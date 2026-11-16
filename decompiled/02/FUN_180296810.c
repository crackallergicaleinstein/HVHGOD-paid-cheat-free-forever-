// FUN_180296810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180296810 */

void FUN_180296810(undefined8 *param_1,undefined1 param_2,ushort param_3,char param_4,
                  undefined8 param_5)

{
  if ((*(char *)*param_1 == '\0') && (param_4 == '\0')) {
    FUN_1802958b0((undefined1 *)param_1[7],*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                  *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],*(undefined8 *)param_1[6],
                  param_5,param_2,*(undefined1 *)param_1[7],*(undefined1 *)param_1[8],
                  param_3 & 0xff | 0x100);
    return;
  }
  FUN_180296090(param_1[1],*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],*(undefined8 *)param_1[6],
                param_5,param_2,*(undefined1 *)param_1[7],*(undefined1 *)param_1[8],
                param_3 & 0xff | 0x100);
  return;
}



