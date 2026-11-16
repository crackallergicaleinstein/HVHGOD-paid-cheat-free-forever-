// FUN_18015a9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a9c0 */

undefined1 (*) [16]
FUN_18015a9c0(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  
  uVar4 = 0xf;
  *param_1 = (undefined1  [16])0x0;
  uVar1 = param_5 + param_7;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  pauVar3 = param_1;
  if (0xf < uVar1) {
    uVar2 = uVar1 | 0xf;
    uVar4 = 0x7fffffffffffffff;
    if ((uVar2 < 0x8000000000000000) && (uVar4 = uVar2, uVar2 < 0x16)) {
      uVar4 = 0x16;
    }
    pauVar3 = (undefined1 (*) [16])FUN_18015bca0(uVar4 + 1);
    *(undefined1 (**) [16])*param_1 = pauVar3;
  }
  *(ulonglong *)param_1[1] = uVar1;
  *(ulonglong *)(param_1[1] + 8) = uVar4;
  FUN_18063aed0(pauVar3,param_4,param_5);
  FUN_18063aed0(*pauVar3 + param_5,param_6,param_7);
  (*pauVar3)[uVar1] = 0;
  return param_1;
}



