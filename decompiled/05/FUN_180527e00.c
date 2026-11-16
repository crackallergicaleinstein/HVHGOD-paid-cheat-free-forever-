// FUN_180527e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180527e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180527e00(undefined8 *param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  char *_Buf2;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  size_t sVar9;
  int *piVar10;
  undefined **ppuVar11;
  size_t _Size;
  undefined1 auStack_108 [32];
  int local_e8 [6];
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0;
  undefined1 uStack_bf;
  undefined4 uStack_be;
  undefined2 uStack_ba;
  char *local_b8 [4];
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)*param_1;
  local_58 = param_2;
  local_50 = param_4;
  if ((ulonglong)((*(longlong *)(lVar1 + 0x48) - *(longlong *)(lVar1 + 0x40)) / 0x18) < 0x7ff8) {
    local_78 = (char *)*param_2;
    uStack_70 = param_2[1];
    uStack_68 = param_2[2];
    uStack_60 = param_2[3];
    *(undefined1 *)param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    local_d0 = FUN_180509220(lVar1,local_b8 + 8);
    uStack_c8 = 0;
    local_e8[2] = param_3;
    local_b8[0] = "Default";
    local_b8[1] = "Consumer Grade";
    local_b8[2] = "Industrial Grade";
    local_b8[3] = "Mil-Spec Grade";
    local_98 = "Restricted";
    local_90 = "Classified";
    local_88 = "Covert";
    local_80 = "Contraband";
    local_c0 = '\0';
    local_e8[4] = 7;
    local_e8[0] = 0;
    piVar10 = local_e8;
    if (-1 < param_3) {
      piVar10 = local_e8 + 2;
    }
    piVar8 = local_e8 + 4;
    if (param_3 < 8) {
      piVar8 = piVar10;
    }
    _Buf2 = local_b8[*piVar8];
    ppuVar11 = &PTR_s_Default_180798050;
    do {
      sVar9 = 0xffffffffffffffff;
      do {
        sVar9 = sVar9 + 1;
      } while (_Buf2[sVar9] != '\0');
      _Size = 0xffffffffffffffff;
      do {
        _Size = _Size + 1;
      } while ((*ppuVar11)[_Size] != '\0');
      if ((_Size == sVar9) && ((_Size == 0 || (iVar7 = memcmp(*ppuVar11,_Buf2,_Size), iVar7 == 0))))
      goto LAB_180527fc2;
      local_c0 = local_c0 + '\x01';
      ppuVar11 = ppuVar11 + 2;
    } while ((longlong)ppuVar11 < 0x180798160);
    local_c0 = '\0';
LAB_180527fc2:
    uStack_be = 0xffffffff;
    uStack_ba = 0xffff;
    puVar2 = *(undefined8 **)(lVar1 + 0x48);
    if (puVar2 == *(undefined8 **)(lVar1 + 0x50)) {
      FUN_180231380((longlong *)(lVar1 + 0x40),puVar2,&local_d0);
    }
    else {
      *puVar2 = local_d0;
      puVar2[1] = uStack_c8;
      puVar2[2] = CONCAT26(0xffff,CONCAT42(0xffffffff,CONCAT11(uStack_bf,local_c0)));
      *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + 0x18;
    }
    lVar1 = *(longlong *)*param_1;
    puVar3 = *(undefined4 **)(lVar1 + 0x60);
    if (puVar3 == *(undefined4 **)(lVar1 + 0x68)) {
      FUN_18056f5a0(lVar1 + 0x58,puVar3,param_4);
    }
    else {
      *puVar3 = *param_4;
      puVar3[1] = param_4[1];
      *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar3 + 6) = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      uVar4 = *(undefined8 *)(param_4 + 4);
      uVar5 = *(undefined8 *)(param_4 + 6);
      uVar6 = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)(puVar3 + 4) = uVar4;
      *(undefined8 *)(puVar3 + 6) = uVar5;
      *(undefined8 *)(puVar3 + 8) = uVar6;
      *(undefined8 *)(param_4 + 8) = 0xf;
      *(undefined1 *)(param_4 + 2) = 0;
      *(undefined8 *)(param_4 + 6) = 0;
      *(undefined1 (*) [16])(puVar3 + 10) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar3 + 0xe) = 0;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      uVar4 = *(undefined8 *)(param_4 + 0xc);
      uVar5 = *(undefined8 *)(param_4 + 0xe);
      uVar6 = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(param_4 + 10);
      *(undefined8 *)(puVar3 + 0xc) = uVar4;
      *(undefined8 *)(puVar3 + 0xe) = uVar5;
      *(undefined8 *)(puVar3 + 0x10) = uVar6;
      *(undefined8 *)(param_4 + 0x10) = 0xf;
      *(undefined1 *)(param_4 + 10) = 0;
      *(undefined8 *)(param_4 + 0xe) = 0;
      *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar3 + 0x16) = 0;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      uVar4 = *(undefined8 *)(param_4 + 0x14);
      uVar5 = *(undefined8 *)(param_4 + 0x16);
      uVar6 = *(undefined8 *)(param_4 + 0x18);
      *(undefined8 *)(puVar3 + 0x12) = *(undefined8 *)(param_4 + 0x12);
      *(undefined8 *)(puVar3 + 0x14) = uVar4;
      *(undefined8 *)(puVar3 + 0x16) = uVar5;
      *(undefined8 *)(puVar3 + 0x18) = uVar6;
      *(undefined1 *)(param_4 + 0x12) = 0;
      *(undefined8 *)(param_4 + 0x16) = 0;
      *(undefined8 *)(param_4 + 0x18) = 0xf;
      *(longlong *)(lVar1 + 0x60) = *(longlong *)(lVar1 + 0x60) + 0x68;
    }
    FUN_18015c010(param_2);
    FUN_18015c010(param_4 + 0x12);
    FUN_18015c010(param_4 + 10);
    FUN_18015c010(param_4 + 2);
  }
  else {
    FUN_18015c010(param_2);
    FUN_18015c010(param_4 + 0x12);
    FUN_18015c010(param_4 + 10);
    FUN_18015c010(param_4 + 2);
  }
}



