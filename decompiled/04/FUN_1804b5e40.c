// FUN_1804b5e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b5e40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804b5e40(void)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  char *local_c8;
  uint local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  ulonglong local_28;
  
  puVar2 = DAT_180bb8ae8;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  lVar10 = 0;
  local_bc = 0;
  local_b0 = 0;
  local_80 = 0;
  local_c8 = "Window";
  local_c0 = 0xffffffff;
  pcVar5 = "Window";
  cVar7 = 'W';
  do {
    pcVar5 = pcVar5 + 1;
    if (((cVar7 == '#') && (*pcVar5 == '#')) && (pcVar5[1] == '#')) {
      local_c0 = 0xffffffff;
      pcVar5 = pcVar5 + 2;
    }
    else {
      local_c0 = crc32(local_c0,cVar7);
    }
    cVar7 = *pcVar5;
  } while (cVar7 != '\0');
  local_c0 = ~local_c0;
  local_b8 = FUN_1804ce5f0;
  local_88 = FUN_1804ce630;
  local_a8 = FUN_1804ce750;
  local_a0 = FUN_1804ce830;
  local_98 = FUN_1804ce9f0;
  local_90 = FUN_1804cea70;
  FUN_1804cfa70(DAT_180bb8ae8 + 0x2790,&local_c8);
  local_bc = 0;
  local_b0 = 0;
  local_80 = 0;
  local_c8 = "Table";
  local_c0 = 0xffffffff;
  pcVar5 = "Table";
  cVar7 = 'T';
  do {
    pcVar5 = pcVar5 + 1;
    if (((cVar7 == '#') && (*pcVar5 == '#')) && (pcVar5[1] == '#')) {
      local_c0 = 0xffffffff;
      pcVar5 = pcVar5 + 2;
    }
    else {
      local_c0 = crc32(local_c0,cVar7);
    }
    cVar7 = *pcVar5;
  } while (cVar7 != '\0');
  local_c0 = ~local_c0;
  local_b8 = FUN_1804f2b40;
  local_88 = FUN_1804f2ba0;
  local_a8 = FUN_1804f2d70;
  local_a0 = FUN_1804f2df0;
  local_98 = FUN_1804f2d10;
  local_90 = FUN_1804f3150;
  FUN_1804cfa70(DAT_180bb8ae8 + 0x2790,&local_c8);
  puVar3 = DAT_180bb8ae8;
  *(char **)(DAT_180bb8ae8 + 0x27e0) = "Dear ImGui 1.93.1 WIP (19302)";
  *(char **)(puVar3 + 0x27e8) = "Size column to fit###SizeOne";
  *(char **)(puVar3 + 0x27f0) = "Size all columns to fit###SizeAll";
  *(char **)(puVar3 + 0x27f8) = "Size all columns to default###SizeAll";
  *(char **)(puVar3 + 0x2800) = "Reset";
  *(char **)(puVar3 + 0x2808) = "Reset order###ResetOrder";
  *(char **)(puVar3 + 0x2810) = "Reset visibility###ResetVisibility";
  *(char **)(puVar3 + 0x2818) = "(Main menu bar)";
  *(char **)(puVar3 + 0x2820) = "(Popup)";
  *(char **)(puVar3 + 0x2828) = "(Untitled)";
  *(char **)(puVar3 + 0x2830) = "Open \'%s\'";
  *(char **)(puVar3 + 0x2838) = "Copy Link###CopyLink";
  *(code **)(puVar2 + 0xbf8) = FUN_1804cefa0;
  *(code **)(puVar2 + 0xc00) = FUN_1804cf0f0;
  *(code **)(puVar2 + 0xc10) = FUN_1804cf1c0;
  *(code **)(puVar2 + 0xc20) = FUN_1804cf300;
  local_58 = FUN_180619960(0);
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  iVar4 = thunk_FUN_180619658(&local_50,&local_58);
  puVar6 = &local_50;
  if (iVar4 != 0) {
    puVar6 = (undefined8 *)0x0;
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 0xc34) =
         (uStack_40._4_4_ * 100 + (int)uStack_40 + 0x2e631) * 100 + uStack_48._4_4_;
  }
  puVar6 = (undefined8 *)FUN_1804b8110(0xf0);
  local_78 = local_d8;
  local_70 = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    local_60 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    local_68 = puVar6 + 0xc;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    *(undefined1 *)local_68 = 0;
    puVar6[0xd] = 0;
    *(undefined4 *)((longlong)puVar6 + 100) = 0;
    iVar4 = *(int *)((longlong)puVar6 + 0x74);
    if (iVar4 < 0) {
      iVar4 = iVar4 + iVar4 / 2;
      iVar8 = 0;
      if (0 < iVar4) {
        iVar8 = iVar4;
      }
      local_60 = puVar6;
      FUN_1804d0a80(puVar6 + 0xe,iVar8);
    }
    *(undefined4 *)(puVar6 + 0xe) = 0;
    puVar6[0x12] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0xffffffffffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x5c) = 0xbf800000;
    *(undefined4 *)(puVar6 + 0xb) = 0xbf800000;
    local_60 = puVar6;
  }
  *(undefined4 *)local_60 = 0x11111111;
  FUN_1804d0160(puVar2 + 0x2028,&local_60);
  local_d8[0] = 0;
  FUN_1804d0f80(puVar2 + 0x2ad0,0xc01,local_d8);
  uVar11 = 0x200;
  do {
    if (((0x217 < uVar11) && (uVar11 < 0x222)) ||
       (((uVar11 - 0x200 < 0x3c &&
         ((0xffffffc00001001U >> ((ulonglong)(uVar11 - 0x200) & 0x3f) & 1) != 0)) ||
        ((uVar11 - 0x254 < 0x21 && ((0x17fff06ffU >> ((ulonglong)(uVar11 - 0x254) & 0x3f) & 1) != 0)
         ))))) {
      *(uint *)(puVar2 + (lVar10 >> 5) * 4 + 0x15c0) =
           *(uint *)(puVar2 + (lVar10 >> 5) * 4 + 0x15c0) | 1 << (uVar11 & 0x1f);
    }
    uVar11 = uVar11 + 1;
    lVar10 = lVar10 + 1;
  } while ((int)uVar11 < 0x29b);
  *(undefined1 **)(puVar2 + 0x1268) = puVar2;
  puVar3 = DAT_180bb8ae8;
  puVar6 = *(undefined8 **)(puVar2 + 0x60);
  *(int *)((longlong)puVar6 + 0xc4) = *(int *)((longlong)puVar6 + 0xc4) + 1;
  local_60 = puVar6;
  FUN_1804d0160(puVar3 + 0x11c0,&local_60);
  local_60 = (undefined8 *)(puVar3 + 0x11f8);
  FUN_1804d0160(puVar6 + 0x12,&local_60);
  plVar9 = (longlong *)puVar6[9];
  plVar1 = plVar9 + *(int *)(puVar6 + 8);
  for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
    *(undefined2 *)(*plVar9 + 0x5c) = *(undefined2 *)((longlong)puVar6 + 0xc4);
  }
  *puVar2 = 1;
}



