// FUN_180166890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180166890 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180166890(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStackY_98 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStackY_98;
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  local_68 = *param_1;
  uStack_60 = param_1[1];
  FUN_180166230(local_38,&local_68);
  local_68 = *param_1;
  uStack_60 = param_1[1];
  cVar4 = FUN_180164bc0(&local_68);
  if (cVar4 == '\0') {
    lVar7 = local_38._0_8_;
  }
  else {
    local_68 = *(undefined8 *)(local_38._0_8_ + 0x30);
    uStack_60 = *(undefined8 *)(local_38._0_8_ + 0x38);
    puVar5 = (undefined8 *)FUN_180166360(local_58,&local_68);
    puVar6 = (undefined8 *)(param_2 + 0x40);
    if (puVar6 != puVar5) {
      FUN_18015c010(puVar6);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *puVar6 = *puVar5;
      *(undefined8 *)(param_2 + 0x48) = uVar1;
      *(undefined8 *)(param_2 + 0x50) = uVar2;
      *(undefined8 *)(param_2 + 0x58) = uVar3;
      puVar5[2] = 0;
      puVar5[3] = 0xf;
      *(undefined1 *)puVar5 = 0;
    }
    FUN_18015c010(local_58);
    if (7 < (ulonglong)((longlong)(local_38._8_8_ - local_38._0_8_) >> 4)) {
      local_68 = *(undefined8 *)(local_38._0_8_ + 0x70);
      uStack_60 = *(undefined8 *)(local_38._0_8_ + 0x78);
      puVar5 = (undefined8 *)FUN_180166360(local_58,&local_68);
      puVar6 = (undefined8 *)(param_2 + 0x80);
      if (puVar6 != puVar5) {
        FUN_18015c010(puVar6);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *puVar6 = *puVar5;
        *(undefined8 *)(param_2 + 0x88) = uVar1;
        *(undefined8 *)(param_2 + 0x90) = uVar2;
        *(undefined8 *)(param_2 + 0x98) = uVar3;
        puVar5[2] = 0;
        puVar5[3] = 0xf;
        *(undefined1 *)puVar5 = 0;
      }
      FUN_18015c010(local_58);
    }
    puVar6 = (undefined8 *)(param_2 + 0xa0);
    lVar7 = *(longlong *)(param_2 + 0xb0);
    if (lVar7 != 0) {
      puVar5 = puVar6;
      if (0xf < *(ulonglong *)(param_2 + 0xb8)) {
        puVar5 = (undefined8 *)*puVar6;
      }
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      }
    }
    *(undefined8 *)(param_2 + 0xb0) = 0;
    if (0xf < *(ulonglong *)(param_2 + 0xb8)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined8 *)(param_2 + 0xc0);
    lVar7 = *(longlong *)(param_2 + 0xd0);
    if (lVar7 != 0) {
      puVar5 = puVar6;
      if (0xf < *(ulonglong *)(param_2 + 0xd8)) {
        puVar5 = (undefined8 *)*puVar6;
      }
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      }
    }
    *(undefined8 *)(param_2 + 0xd0) = 0;
    if (0xf < *(ulonglong *)(param_2 + 0xd8)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined8 *)(param_2 + 0xe0);
    lVar7 = *(longlong *)(param_2 + 0xf0);
    if (lVar7 != 0) {
      puVar5 = puVar6;
      if (0xf < *(ulonglong *)(param_2 + 0xf8)) {
        puVar5 = (undefined8 *)*puVar6;
      }
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      }
    }
    *(undefined8 *)(param_2 + 0xf0) = 0;
    if (0xf < *(ulonglong *)(param_2 + 0xf8)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined8 *)(param_2 + 0x100);
    lVar7 = *(longlong *)(param_2 + 0x110);
    if (lVar7 != 0) {
      puVar5 = puVar6;
      if (0xf < *(ulonglong *)(param_2 + 0x118)) {
        puVar5 = (undefined8 *)*puVar6;
      }
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      }
    }
    *(undefined8 *)(param_2 + 0x110) = 0;
    if (0xf < *(ulonglong *)(param_2 + 0x118)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined8 *)(param_2 + 0x120);
    lVar7 = *(longlong *)(param_2 + 0x130);
    if (lVar7 != 0) {
      puVar5 = puVar6;
      if (0xf < *(ulonglong *)(param_2 + 0x138)) {
        puVar5 = (undefined8 *)*puVar6;
      }
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      }
    }
    *(undefined8 *)(param_2 + 0x130) = 0;
    if (0xf < *(ulonglong *)(param_2 + 0x138)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined8 *)(param_2 + 0x140);
    lVar7 = *(longlong *)(param_2 + 0x150);
    if (lVar7 != 0) {
      puVar5 = puVar6;
      if (0xf < *(ulonglong *)(param_2 + 0x158)) {
        puVar5 = (undefined8 *)*puVar6;
      }
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      }
    }
    *(undefined8 *)(param_2 + 0x150) = 0;
    if (0xf < *(ulonglong *)(param_2 + 0x158)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    *(undefined1 *)puVar6 = 0;
    if (8 < (ulonglong)((longlong)(local_38._8_8_ - local_38._0_8_) >> 4)) {
      local_68 = *(undefined8 *)(local_38._0_8_ + 0x80);
      uStack_60 = *(undefined8 *)(local_38._0_8_ + 0x88);
      puVar5 = (undefined8 *)FUN_180166360(local_58,&local_68);
      puVar6 = (undefined8 *)(param_2 + 0xa0);
      if (puVar6 != puVar5) {
        FUN_18015c010(puVar6);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *puVar6 = *puVar5;
        *(undefined8 *)(param_2 + 0xa8) = uVar1;
        *(undefined8 *)(param_2 + 0xb0) = uVar2;
        *(undefined8 *)(param_2 + 0xb8) = uVar3;
        puVar5[2] = 0;
        puVar5[3] = 0xf;
        *(undefined1 *)puVar5 = 0;
      }
      FUN_18015c010(local_58);
    }
    lVar7 = local_38._0_8_;
    lVar8 = local_38._8_8_;
    if (9 < (ulonglong)((longlong)(local_38._8_8_ - local_38._0_8_) >> 4)) {
      local_68 = *(undefined8 *)(local_38._0_8_ + 0x90);
      uStack_60 = *(undefined8 *)(local_38._0_8_ + 0x98);
      puVar5 = (undefined8 *)FUN_180166360(local_58,&local_68);
      puVar6 = (undefined8 *)(param_2 + 0xc0);
      if (puVar6 != puVar5) {
        FUN_18015c010(puVar6);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *puVar6 = *puVar5;
        *(undefined8 *)(param_2 + 200) = uVar1;
        *(undefined8 *)(param_2 + 0xd0) = uVar2;
        *(undefined8 *)(param_2 + 0xd8) = uVar3;
        puVar5[2] = 0;
        puVar5[3] = 0xf;
        *(undefined1 *)puVar5 = 0;
      }
      FUN_18015c010(local_58);
      lVar7 = local_38._0_8_;
      lVar8 = local_38._8_8_;
    }
    if (10 < (ulonglong)(lVar8 - lVar7 >> 4)) {
      local_68 = *(undefined8 *)(lVar7 + 0xa0);
      uStack_60 = *(undefined8 *)(lVar7 + 0xa8);
      puVar5 = (undefined8 *)FUN_180166360(local_58,&local_68);
      puVar6 = (undefined8 *)(param_2 + 0xe0);
      if (puVar6 != puVar5) {
        FUN_18015c010(puVar6);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *puVar6 = *puVar5;
        *(undefined8 *)(param_2 + 0xe8) = uVar1;
        *(undefined8 *)(param_2 + 0xf0) = uVar2;
        *(undefined8 *)(param_2 + 0xf8) = uVar3;
        puVar5[2] = 0;
        puVar5[3] = 0xf;
        *(undefined1 *)puVar5 = 0;
      }
      FUN_18015c010(local_58);
      lVar7 = local_38._0_8_;
      lVar8 = local_38._8_8_;
    }
    if (0xb < (ulonglong)(lVar8 - lVar7 >> 4)) {
      local_68 = *(undefined8 *)(lVar7 + 0xb0);
      uStack_60 = *(undefined8 *)(lVar7 + 0xb8);
      puVar5 = (undefined8 *)FUN_180166360(local_58,&local_68);
      puVar6 = (undefined8 *)(param_2 + 0x100);
      if (puVar6 != puVar5) {
        FUN_18015c010(puVar6);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *puVar6 = *puVar5;
        *(undefined8 *)(param_2 + 0x108) = uVar1;
        *(undefined8 *)(param_2 + 0x110) = uVar2;
        *(undefined8 *)(param_2 + 0x118) = uVar3;
        puVar5[2] = 0;
        puVar5[3] = 0xf;
        *(undefined1 *)puVar5 = 0;
      }
      FUN_18015c010(local_58);
      lVar7 = local_38._0_8_;
      lVar8 = local_38._8_8_;
    }
    if (0xc < (ulonglong)(lVar8 - lVar7 >> 4)) {
      local_68 = *(undefined8 *)(lVar7 + 0xc0);
      uStack_60 = *(undefined8 *)(lVar7 + 200);
      puVar5 = (undefined8 *)FUN_180166360(local_58,&local_68);
      puVar6 = (undefined8 *)(param_2 + 0x120);
      if (puVar6 != puVar5) {
        FUN_18015c010(puVar6);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *puVar6 = *puVar5;
        *(undefined8 *)(param_2 + 0x128) = uVar1;
        *(undefined8 *)(param_2 + 0x130) = uVar2;
        *(undefined8 *)(param_2 + 0x138) = uVar3;
        puVar5[2] = 0;
        puVar5[3] = 0xf;
        *(undefined1 *)puVar5 = 0;
      }
      FUN_18015c010(local_58);
      lVar7 = local_38._0_8_;
      lVar8 = local_38._8_8_;
    }
    if (0xd < (ulonglong)(lVar8 - lVar7 >> 4)) {
      local_68 = *(undefined8 *)(lVar7 + 0xd0);
      uStack_60 = *(undefined8 *)(lVar7 + 0xd8);
      puVar6 = (undefined8 *)FUN_180166360(local_58,&local_68);
      puVar5 = (undefined8 *)(param_2 + 0x140);
      if (puVar5 != puVar6) {
        FUN_18015c010(puVar5);
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        *(undefined8 *)(param_2 + 0x148) = uVar1;
        *(undefined8 *)(param_2 + 0x150) = uVar2;
        *(undefined8 *)(param_2 + 0x158) = uVar3;
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        *(undefined1 *)puVar6 = 0;
      }
      FUN_18015c010(local_58);
      lVar7 = local_38._0_8_;
    }
  }
  if (lVar7 != 0) {
    if ((0xfff < (local_28 - lVar7 & 0xfffffffffffffff0U)) &&
       (0x1f < (lVar7 - *(longlong *)(lVar7 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
}



