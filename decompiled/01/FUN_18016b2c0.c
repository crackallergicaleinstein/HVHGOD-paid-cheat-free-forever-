// FUN_18016b2c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016b2c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016b2c0(undefined8 param_1,char *param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auStack_738 [32];
  undefined **local_718;
  char *local_710;
  longlong local_708;
  undefined1 *local_6f8;
  char *local_6f0;
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [16];
  undefined1 local_6c8 [16];
  undefined8 local_6b8;
  undefined1 local_6b0 [16];
  undefined8 local_6a0;
  undefined1 local_698 [24];
  undefined1 local_680 [16];
  undefined8 local_670;
  undefined1 local_668 [24];
  undefined1 local_650 [24];
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_738;
  bVar13 = false;
  local_6f8 = (undefined1 *)((ulonglong)local_6f8 & 0xffffffff00000000);
  pcVar11 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pcVar11 = *(char **)param_2;
  }
  FUN_18063ab10(local_638,0,0x600);
  local_718 = (undefined **)pcVar11;
  FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"id=%s");
  local_718 = &PTR_180700558;
  if (local_638[0] != '\0') {
    local_718 = (undefined **)&DAT_1806bcfc0;
  }
  local_710 = local_638;
  FUN_1800f6900(0);
  puVar10 = DAT_180bb8b20;
  if (DAT_180bb8b18 == DAT_180bb8b20) {
LAB_18016b3d1:
    FUN_180113930(&DAT_180bb8f50,"Config could not be found.",0x1a);
  }
  uVar1 = *(ulonglong *)(param_2 + 0x18);
  sVar2 = *(size_t *)(param_2 + 0x10);
  puVar12 = DAT_180bb8b18;
  do {
    pcVar11 = param_2;
    if (0xf < uVar1) {
      pcVar11 = *(char **)param_2;
    }
    _Size = puVar12[2];
    puVar9 = puVar12;
    if (0xf < (ulonglong)puVar12[3]) {
      puVar9 = (undefined8 *)*puVar12;
    }
  } while (((_Size != sVar2) || ((_Size != 0 && (iVar7 = memcmp(puVar9,pcVar11,_Size), iVar7 != 0)))
           ) && (puVar12 = puVar12 + 0x2d, puVar12 != puVar10));
  if (puVar12 == puVar10) goto LAB_18016b3d1;
  if (*(char *)((longlong)puVar12 + 0xe3) != '\0') {
    FUN_1800e60e0(local_668,"action");
    FUN_1800e60e0(local_650,&DAT_180700e24);
    local_6f8 = local_668;
    local_6f0 = local_638;
    FUN_1800f4e90(local_6c8,&local_6f8,1,2);
    local_6b8 = 0;
    FUN_1800e60e0(local_698,&DAT_1806bc068);
    FUN_1800e64d0(local_680,param_2);
    local_670 = 0;
    local_6f8 = local_698;
    local_6f0 = local_668;
    FUN_1800f4e90(local_6b0,&local_6f8,1,2);
    local_6a0 = 0;
    local_6f8 = local_6c8;
    local_6f0 = local_698;
    uVar8 = FUN_1800f4e90(local_6e8,&local_6f8,1,2);
    FUN_180172820(&DAT_180bb8af0,uVar8);
    _eh_vector_destructor_iterator_(local_6c8,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_698,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_668,0x18,2,FUN_1800aab30);
  }
  if (DAT_180bb8d22 != '\0') {
    local_6e8 = (undefined1  [16])0x0;
    local_6d8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_6e8,"Wait for the current private fork operation.",0x2c);
    FUN_18016df60(&DAT_180bb8af0,local_6e8,0);
    FUN_18015c010(local_6e8);
  }
  if (*(char *)((longlong)puVar12 + 0xe2) == '\0') {
    local_708 = *(longlong *)(param_2 + 0x10);
    if (0x7fffffffffffffffU - local_708 < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_710 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      local_710 = *(char **)param_2;
    }
    local_718 = (undefined **)0x5;
    FUN_18015a9c0(local_6e8);
    bVar13 = true;
    local_6f8 = (undefined1 *)CONCAT44(local_6f8._4_4_,3);
    cVar6 = FUN_18016e0a0(&DAT_180bb8af0,local_6e8);
    if (cVar6 == '\0') {
      bVar3 = true;
      goto LAB_18016b605;
    }
  }
  bVar3 = false;
LAB_18016b605:
  if (bVar13) {
    FUN_18015c010(local_6e8);
  }
  if (bVar3) {
  }
  FUN_180172a90();
  if (param_2 != (char *)&DAT_180bb8eb0) {
    pcVar11 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar11 = *(char **)param_2;
    }
    FUN_180113930(&DAT_180bb8eb0,pcVar11,*(undefined8 *)(param_2 + 0x10));
  }
  puVar10 = DAT_180bb8b18;
  puVar9 = DAT_180bb8b20;
  puVar4 = DAT_180bb8b38;
  if (param_2 != (char *)&DAT_180bb8ef0) {
    pcVar11 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar11 = *(char **)param_2;
    }
    FUN_180113930(&DAT_180bb8ef0,pcVar11,*(undefined8 *)(param_2 + 0x10));
    puVar10 = DAT_180bb8b18;
    puVar9 = DAT_180bb8b20;
    puVar4 = DAT_180bb8b38;
  }
  for (; puVar5 = DAT_180bb8b20, bVar13 = puVar10 != DAT_180bb8b20, DAT_180bb8b20 = puVar9,
      puVar9 = DAT_180bb8b30, DAT_180bb8b38 = puVar4, bVar13; puVar10 = puVar10 + 0x2d) {
    pcVar11 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar11 = *(char **)param_2;
    }
    sVar2 = puVar10[2];
    puVar9 = puVar10;
    if (0xf < (ulonglong)puVar10[3]) {
      puVar9 = (undefined8 *)*puVar10;
    }
    if (sVar2 == *(size_t *)(param_2 + 0x10)) {
      if (sVar2 == 0) {
        bVar13 = true;
      }
      else {
        iVar7 = memcmp(puVar9,pcVar11,sVar2);
        bVar13 = iVar7 == 0;
      }
    }
    else {
      bVar13 = false;
    }
    *(bool *)(puVar10 + 0x1c) = bVar13;
    puVar9 = DAT_180bb8b20;
    puVar4 = DAT_180bb8b38;
    DAT_180bb8b20 = puVar5;
  }
  for (; puVar9 != puVar4; puVar9 = puVar9 + 0x2d) {
    pcVar11 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar11 = *(char **)param_2;
    }
    sVar2 = puVar9[2];
    puVar10 = puVar9;
    if (0xf < (ulonglong)puVar9[3]) {
      puVar10 = (undefined8 *)*puVar9;
    }
    if (sVar2 == *(size_t *)(param_2 + 0x10)) {
      if (sVar2 == 0) {
        bVar13 = true;
      }
      else {
        iVar7 = memcmp(puVar10,pcVar11,sVar2);
        bVar13 = iVar7 == 0;
      }
    }
    else {
      bVar13 = false;
    }
    *(bool *)(puVar9 + 0x1c) = bVar13;
  }
  if (*(char *)((longlong)puVar12 + 0xe2) == '\0') {
  }
  FUN_180113930(&DAT_180bb8f50,"Dummy config loaded locally.",0x1c);
}



