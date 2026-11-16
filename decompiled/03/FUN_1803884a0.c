// FUN_1803884a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803884a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803884a0(void)

{
  char ****ppppcVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  char ****ppppcVar9;
  undefined1 auStack_128 [64];
  longlong *local_e8 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 ****local_b8 [2];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98 [32];
  char ****local_78 [2];
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  plVar4 = (longlong *)FUN_1801edc30(local_d8);
  local_58 = *plVar4;
  lStack_50 = plVar4[1];
  local_48 = plVar4[2];
  if (((local_58 != 0) && (lStack_50 != 0)) && (local_48 != 0)) {
    local_e8[0] = &local_58;
    cVar3 = FUN_1803886e0(local_e8);
    if (cVar3 == '\0') {
      local_d8 = (undefined1  [16])0x0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_180159e60(local_d8,L"Materials",9);
      uVar5 = FUN_18017ec20(local_98);
      FUN_1800a7e60(local_b8,uVar5,local_d8);
      FUN_18015b930(local_98);
      FUN_18015b930(local_d8);
      local_d8._0_8_ = local_b8;
      if (7 < local_a0) {
        local_d8._0_8_ = local_b8[0];
      }
      local_d8._8_8_ = local_a8;
      FUN_1801a4fb0(local_78);
      ppppcVar9 = (char ****)local_78;
      if (0xf < local_60) {
        ppppcVar9 = local_78[0];
      }
      ppppcVar9 = (char ****)((longlong)ppppcVar9 + local_68);
      ppppcVar1 = (char ****)local_78;
      if (0xf < local_60) {
        ppppcVar1 = local_78[0];
      }
      for (; ppppcVar1 != ppppcVar9; ppppcVar1 = (char ****)((longlong)ppppcVar1 + 1)) {
        if (*(char *)ppppcVar1 == '\\') {
          *(char *)ppppcVar1 = '/';
        }
      }
      FUN_18015b930(local_b8);
      ppppcVar9 = (char ****)local_78;
      if (0xf < local_60) {
        ppppcVar9 = local_78[0];
      }
      local_40 = (undefined1  [16])0x0;
      local_30 = (undefined1  [16])0x0;
      FUN_18015ba30(local_40,ppppcVar9,local_68);
      lVar2 = local_48;
      lVar7 = local_58;
      puVar8 = local_40;
      if (0xf < (ulonglong)local_30._8_8_) {
        puVar8 = (undefined1 *)local_40._0_8_;
      }
      cVar3 = FUN_1804513c0(local_48,1,2);
      if (cVar3 != '\0') {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar3 = FUN_1801f3b50(lVar2,lVar7,puVar8);
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if (cVar3 != '\0') {
          FUN_1803886e0(local_e8);
        }
      }
      FUN_18015c010(local_40);
      FUN_18015c010(local_78);
    }
  }
}



