// FUN_180152570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180152570 */

longlong FUN_180152570(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_28 [16];
  
  if (param_1[1] == param_1[2]) {
    local_28 = ZEXT816(0);
    uVar7 = *param_2;
    FUN_1801409d0(local_28 + 8,0);
    puVar2 = (undefined1 *)*param_1;
    uVar1 = *puVar2;
    *puVar2 = 7;
    local_28[0] = uVar1;
    uVar3 = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)(puVar2 + 8) = uVar7;
    local_28._8_8_ = uVar3;
    FUN_1801409d0(local_28 + 8);
    lVar6 = *param_1;
  }
  else {
    pcVar4 = *(char **)(param_1[2] + -8);
    if (*pcVar4 == '\x02') {
      lVar6 = *(longlong *)(pcVar4 + 8);
      pauVar5 = *(undefined1 (**) [16])(lVar6 + 8);
      if (pauVar5 == *(undefined1 (**) [16])(lVar6 + 0x10)) {
        FUN_180157e20(lVar6,pauVar5,param_2);
      }
      else {
        *pauVar5 = (undefined1  [16])0x0;
        uVar7 = *param_2;
        FUN_1801409d0(*pauVar5 + 8,(*pauVar5)[0]);
        *(undefined8 *)(*pauVar5 + 8) = uVar7;
        (*pauVar5)[0] = 7;
        *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + 0x10;
      }
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_28 = ZEXT816(0);
      uVar7 = *param_2;
      FUN_1801409d0(local_28 + 8,0);
      puVar2 = (undefined1 *)param_1[4];
      uVar1 = *puVar2;
      *puVar2 = 7;
      local_28[0] = uVar1;
      uVar3 = *(undefined8 *)(puVar2 + 8);
      *(undefined8 *)(puVar2 + 8) = uVar7;
      local_28._8_8_ = uVar3;
      FUN_1801409d0(local_28 + 8);
      lVar6 = param_1[4];
    }
  }
  return lVar6;
}



