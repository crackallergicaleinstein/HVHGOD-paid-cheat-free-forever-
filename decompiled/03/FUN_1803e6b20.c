// FUN_1803e6b20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e6b20 */

undefined1 (*) [16]
FUN_1803e6b20(undefined8 param_1,undefined1 (*param_2) [16],longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 (*local_38) [16];
  
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_3 + lVar5) != '\0');
  local_38 = param_2;
  FUN_18015ba30(param_2,param_3,lVar5,param_4,0);
  uVar6 = 3;
  uVar4 = *(ulonglong *)param_2[1];
  pauVar3 = param_2;
  if (0xf < *(ulonglong *)(param_2[1] + 8)) {
    pauVar3 = *(undefined1 (**) [16])*param_2;
  }
  if (7 < uVar4) {
    puVar2 = (undefined1 *)thunk_FUN_1805f9970(pauVar3,*pauVar3 + uVar4,"shader =",8,3);
    if (puVar2 != *pauVar3 + uVar4) {
      uVar4 = (longlong)puVar2 - (longlong)pauVar3;
      goto LAB_1803e6bbf;
    }
  }
  uVar4 = 0xffffffffffffffff;
LAB_1803e6bbf:
  uVar1 = *(ulonglong *)param_2[1];
  pauVar3 = param_2;
  if (0xf < *(ulonglong *)(param_2[1] + 8)) {
    pauVar3 = *(undefined1 (**) [16])*param_2;
  }
  if (0x16 < uVar1) {
    puVar2 = (undefined1 *)
             thunk_FUN_1805f9970(pauVar3,*pauVar3 + uVar1,"F_DISABLE_Z_BUFFERING =",0x17,uVar6);
    if ((puVar2 != *pauVar3 + uVar1) && ((longlong)puVar2 - (longlong)pauVar3 != -1)) {
      local_58 = &DAT_180700848;
      local_50 = 1;
      local_48 = "F_DISABLE_Z_BUFFERING";
      local_40 = 0x15;
      FUN_1803e3d40(param_2,&local_48,&local_58);
      return param_2;
    }
  }
  if (uVar4 != 0xffffffffffffffff) {
    uVar1 = *(ulonglong *)param_2[1];
    pauVar3 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      pauVar3 = *(undefined1 (**) [16])*param_2;
    }
    lVar5 = -1;
    if (uVar4 < uVar1) {
      puVar2 = (undefined1 *)thunk_FUN_1805f7e70(*pauVar3 + uVar4,*pauVar3 + uVar1,10);
      if (puVar2 != *pauVar3 + uVar1) {
        lVar5 = (longlong)puVar2 - (longlong)pauVar3;
      }
    }
    FUN_180141490(param_2,lVar5 + 1,"F_DISABLE_Z_BUFFERING = 1\n",0x1a);
  }
  return param_2;
}



