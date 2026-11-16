// FUN_18051eb20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051eb20 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_18051eb20(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  size_t _Size;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 ***_Buf1;
  undefined8 *_Buf1_00;
  undefined8 ***_Buf2;
  undefined8 *_Buf2_00;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 ***local_e8;
  undefined8 uStack_e0;
  size_t sStack_d8;
  ulonglong uStack_d0;
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  size_t sStack_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 ***local_68;
  undefined8 uStack_60;
  size_t sStack_58;
  ulonglong uStack_50;
  undefined8 ***local_48;
  undefined8 uStack_40;
  size_t sStack_38;
  ulonglong uStack_30;
  
  bVar3 = false;
  bVar2 = false;
  if ((param_2 != *(longlong *)*param_1) && (*(char *)(param_2 + 4) == '\0')) {
    pbVar5 = (byte *)FUN_18015b360(local_a8,*(longlong *)*param_1 + 0x18);
    if (*(ulonglong *)(pbVar5 + 0x18) < 0x10) {
      pbVar6 = pbVar5;
    }
    else {
      pbVar6 = *(byte **)pbVar5;
    }
    pbVar8 = pbVar6 + *(longlong *)(pbVar5 + 0x10);
    for (; pbVar6 != pbVar8; pbVar6 = pbVar6 + 1) {
      iVar4 = tolower((uint)*pbVar6);
      *pbVar6 = (byte)iVar4;
      if ((byte)iVar4 == 0x5f) {
        *pbVar6 = 0x20;
      }
    }
    local_c8 = *(undefined8 ****)pbVar5;
    uStack_c0 = *(undefined8 *)(pbVar5 + 8);
    sStack_b8 = *(size_t *)(pbVar5 + 0x10);
    uStack_b0 = *(ulonglong *)(pbVar5 + 0x18);
    *pbVar5 = 0;
    pbVar5[0x10] = 0;
    pbVar5[0x11] = 0;
    pbVar5[0x12] = 0;
    pbVar5[0x13] = 0;
    pbVar5[0x14] = 0;
    pbVar5[0x15] = 0;
    pbVar5[0x16] = 0;
    pbVar5[0x17] = 0;
    pbVar5[0x18] = 0xf;
    pbVar5[0x19] = 0;
    pbVar5[0x1a] = 0;
    pbVar5[0x1b] = 0;
    pbVar5[0x1c] = 0;
    pbVar5[0x1d] = 0;
    pbVar5[0x1e] = 0;
    pbVar5[0x1f] = 0;
    local_68 = local_c8;
    uStack_60 = uStack_c0;
    sStack_58 = sStack_b8;
    uStack_50 = uStack_b0;
    FUN_18015c010(pbVar5);
    pbVar5 = (byte *)FUN_18015b360(local_88,param_2 + 0x38);
    if (*(ulonglong *)(pbVar5 + 0x18) < 0x10) {
      pbVar6 = pbVar5;
    }
    else {
      pbVar6 = *(byte **)pbVar5;
    }
    pbVar8 = pbVar6 + *(longlong *)(pbVar5 + 0x10);
    for (; pbVar6 != pbVar8; pbVar6 = pbVar6 + 1) {
      iVar4 = tolower((uint)*pbVar6);
      *pbVar6 = (byte)iVar4;
      if ((byte)iVar4 == 0x5f) {
        *pbVar6 = 0x20;
      }
    }
    local_e8 = *(undefined8 ****)pbVar5;
    uStack_e0 = *(undefined8 *)(pbVar5 + 8);
    sStack_d8 = *(size_t *)(pbVar5 + 0x10);
    uStack_d0 = *(ulonglong *)(pbVar5 + 0x18);
    *pbVar5 = 0;
    pbVar5[0x10] = 0;
    pbVar5[0x11] = 0;
    pbVar5[0x12] = 0;
    pbVar5[0x13] = 0;
    pbVar5[0x14] = 0;
    pbVar5[0x15] = 0;
    pbVar5[0x16] = 0;
    pbVar5[0x17] = 0;
    pbVar5[0x18] = 0xf;
    pbVar5[0x19] = 0;
    pbVar5[0x1a] = 0;
    pbVar5[0x1b] = 0;
    pbVar5[0x1c] = 0;
    pbVar5[0x1d] = 0;
    pbVar5[0x1e] = 0;
    pbVar5[0x1f] = 0;
    local_48 = local_e8;
    uStack_40 = uStack_e0;
    sStack_38 = sStack_d8;
    uStack_30 = uStack_d0;
    FUN_18015c010(pbVar5);
    bVar3 = true;
    bVar2 = true;
    _Buf2 = &local_c8;
    if (0xf < uStack_50) {
      _Buf2 = local_68;
    }
    _Buf1 = &local_e8;
    if (0xf < uStack_30) {
      _Buf1 = local_48;
    }
    if ((sStack_38 == sStack_58) &&
       ((sStack_38 == 0 || (iVar4 = memcmp(_Buf1,_Buf2,sStack_38), iVar4 == 0)))) {
      lVar1 = *(longlong *)*param_1;
      _Buf2_00 = (undefined8 *)(lVar1 + 0x18);
      _Buf1_00 = (undefined8 *)(param_2 + 0x18);
      if (0xf < *(ulonglong *)(lVar1 + 0x30)) {
        _Buf2_00 = (undefined8 *)*_Buf2_00;
      }
      _Size = *(size_t *)(param_2 + 0x28);
      if (0xf < *(ulonglong *)(param_2 + 0x30)) {
        _Buf1_00 = (undefined8 *)*_Buf1_00;
      }
      if ((_Size != *(size_t *)(lVar1 + 0x28)) ||
         ((_Size != 0 && (iVar4 = memcmp(_Buf1_00,_Buf2_00,_Size), iVar4 != 0)))) {
        uVar7 = 1;
        goto LAB_18051ed2d;
      }
    }
  }
  uVar7 = 0;
LAB_18051ed2d:
  if (bVar2) {
    FUN_18015c010(&local_e8);
  }
  if (bVar3) {
    FUN_18015c010(&local_c8);
  }
  return uVar7;
}



