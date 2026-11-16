// FUN_18017b720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b720 */

undefined1 (*) [16]
FUN_18017b720(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0xf;
  (*param_2)[0] = 0;
  pauVar3 = param_2 + 2;
  *pauVar3 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[3] = 0;
  *(undefined8 *)(param_2[3] + 8) = 0xf;
  (*pauVar3)[0] = 0;
  uVar4 = 0x40;
  pauVar5 = param_2;
  cVar1 = FUN_180166df0(param_1 + 8,0xc000000,param_2,param_4,0x40,param_2);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2[1] = 0;
    pauVar2 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      pauVar2 = *(undefined1 (**) [16])*param_2;
    }
    (*pauVar2)[0] = 0;
  }
  cVar1 = FUN_180166df0(param_1 + 0x28,0x3000000,pauVar3,param_4,uVar4,pauVar5);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2[3] = 0;
    if (0xf < *(ulonglong *)(param_2[3] + 8)) {
      pauVar3 = *(undefined1 (**) [16])*pauVar3;
    }
    (*pauVar3)[0] = 0;
  }
  return param_2;
}



