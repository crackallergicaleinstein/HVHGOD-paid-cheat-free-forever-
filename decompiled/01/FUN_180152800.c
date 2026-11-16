// FUN_180152800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180152800 */

longlong FUN_180152800(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 local_28 [16];
  
  if (param_1[1] == param_1[2]) {
    local_28 = ZEXT816(0);
    uVar2 = *param_2;
    FUN_1801409d0(local_28 + 8,0);
    puVar3 = (undefined1 *)*param_1;
    uVar1 = *puVar3;
    *puVar3 = 5;
    local_28[0] = uVar1;
    uVar4 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar3 + 8) = uVar2;
    local_28._8_8_ = uVar4;
    FUN_1801409d0(local_28 + 8);
    lVar7 = *param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      lVar7 = *(longlong *)(pcVar5 + 8);
      pauVar6 = *(undefined1 (**) [16])(lVar7 + 8);
      if (pauVar6 == *(undefined1 (**) [16])(lVar7 + 0x10)) {
        FUN_180158170(lVar7,pauVar6,param_2);
      }
      else {
        *pauVar6 = (undefined1  [16])0x0;
        uVar2 = *param_2;
        FUN_1801409d0(*pauVar6 + 8,(*pauVar6)[0]);
        (*pauVar6)[0] = 5;
        *(undefined8 *)(*pauVar6 + 8) = uVar2;
        *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x10;
      }
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_28 = ZEXT816(0);
      uVar2 = *param_2;
      FUN_1801409d0(local_28 + 8,0);
      puVar3 = (undefined1 *)param_1[4];
      uVar1 = *puVar3;
      *puVar3 = 5;
      local_28[0] = uVar1;
      uVar4 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = uVar2;
      local_28._8_8_ = uVar4;
      FUN_1801409d0(local_28 + 8);
      lVar7 = param_1[4];
    }
  }
  return lVar7;
}



