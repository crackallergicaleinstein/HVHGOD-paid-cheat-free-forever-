// FUN_180152940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180152940 */

longlong FUN_180152940(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined7 uStackX_9;
  undefined1 local_28 [16];
  
  if (param_1[1] == param_1[2]) {
    local_28 = ZEXT816(0);
    uVar1 = *param_2;
    FUN_1801409d0(local_28 + 8,0);
    puVar3 = (undefined1 *)*param_1;
    uVar2 = *puVar3;
    *puVar3 = 4;
    local_28[0] = uVar2;
    uVar4 = *(undefined8 *)(puVar3 + 8);
    *(ulonglong *)(puVar3 + 8) = CONCAT71(uStackX_9,uVar1);
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
        FUN_180158310(lVar7,pauVar6,param_2);
      }
      else {
        *pauVar6 = (undefined1  [16])0x0;
        uVar1 = *param_2;
        FUN_1801409d0(*pauVar6 + 8,(*pauVar6)[0]);
        *(ulonglong *)(*pauVar6 + 8) = CONCAT71(uStackX_9,uVar1);
        (*pauVar6)[0] = 4;
        *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x10;
      }
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_28 = ZEXT816(0);
      uVar1 = *param_2;
      FUN_1801409d0(local_28 + 8,0);
      puVar3 = (undefined1 *)param_1[4];
      uVar2 = *puVar3;
      *puVar3 = 4;
      local_28[0] = uVar2;
      uVar4 = *(undefined8 *)(puVar3 + 8);
      *(ulonglong *)(puVar3 + 8) = CONCAT71(uStackX_9,uVar1);
      local_28._8_8_ = uVar4;
      FUN_1801409d0(local_28 + 8);
      lVar7 = param_1[4];
    }
  }
  return lVar7;
}



