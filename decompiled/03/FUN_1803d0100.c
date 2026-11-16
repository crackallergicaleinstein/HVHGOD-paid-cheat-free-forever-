// FUN_1803d0100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d0100 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803d0100(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  char **ppcVar9;
  undefined8 uVar10;
  undefined1 auVar11 [64];
  undefined1 auStack_6d8 [32];
  undefined **local_6b8;
  char *local_6b0;
  longlong *local_6a8 [2];
  char *local_698;
  longlong lStack_690;
  longlong local_688;
  char *local_680;
  longlong lStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined4 local_650;
  undefined4 local_64c;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6d8;
  FUN_1803cfa70(&DAT_180ccaaa8);
  if (DAT_180ccddb0 == '\0') {
    local_698 = &DAT_1807c27c0;
    lStack_690 = 0x1f30;
    FUN_1800ab8b0(&local_680,&local_698);
    if ((char)uStack_668 != '\0') {
      local_698 = local_680;
      lStack_690 = lStack_678 - (longlong)local_680;
      plVar4 = (longlong *)FUN_180437520(local_6a8,&local_698,&DAT_180ccde40,&DAT_180ccde44);
      lVar5 = 0;
      if (&local_688 != plVar4) {
        lVar5 = *plVar4;
        *plVar4 = 0;
      }
      if (DAT_180ccde38 != 0) {
        lVar1 = *(longlong *)DAT_180ccde38;
        DAT_180ccde38 = lVar5;
        (**(code **)(lVar1 + 0x10))();
        lVar5 = DAT_180ccde38;
      }
      DAT_180ccde38 = lVar5;
      plVar4 = local_6a8[0];
      if (local_6a8[0] != (longlong *)0x0) {
        local_6a8[0] = (longlong *)0x0;
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    if ((char)uStack_668 != '\0') {
      FUN_180113710(&local_680);
    }
    ppuVar8 = &PTR_180700558;
    if (DAT_180ccde38 == 0) {
      FUN_18063ab10(local_648,0,0x600);
      FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"asset=legacy_png recovery=svg_fallback");
      local_6b8 = &PTR_180700558;
      if (local_648[0] != '\0') {
        local_6b8 = (undefined **)&DAT_1806bcfc0;
      }
      local_6b0 = local_648;
      FUN_1800f6900(2);
      local_698 = 
      "<svg width=\"17\" height=\"14\" viewBox=\"0 0 17 14\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\"><path d=\"M0.148138 10.5306L7.19953 0.643266C7.81122 -0.214422 9.08773 -0.214422 9.69942 0.643266L16.7254 10.4949C17.099 11.0189 16.7236 11.7453 16.0792 11.7453H14.5344C14.1378 11.7453 13.7815 11.5036 13.6355 11.1356L11.5458 5.86857C11.4326 5.58318 11.1562 5.3957 10.8486 5.3957C10.7131 5.3957 10.6149 5.52457 10.651 5.65485L12.6899 12.9972C12.8299 13.5014 12.4499 14 11.9256 14H10.5367C10.2323 14 9.97322 13.7786 9.92648 13.4784L8.68012 4.66254C8.64757 4.45362 8.28767 4.45728 8.24676 4.66475L6.57384 13.5028C6.51683 13.7917 6.26301 14 5.96795 14H4.58215C4.04293 14 3.66094 13.4746 3.8282 12.9631L6.17936 5.7721C6.23588 5.59921 6.10678 5.4216 5.92452 5.4216H5.87377C5.57672 5.4216 5.30764 5.59658 5.1877 5.86781L2.81532 11.2326C2.65733 11.5899 2.29903 11.8169 1.9078 11.8076L0.775512 11.7808C0.139818 11.7656 -0.220464 11.0476 0.148214 10.5306H0.148138Z\" fill=\"#111111\"/> </svg>"
      ;
      lStack_690 = 0x3cd;
      local_6b0 = (char *)0x0;
      local_6b8 = (undefined **)&DAT_180ccde44;
      FUN_180437bd0(local_6a8,&local_698,0x3f924925,&DAT_180ccde40);
      plVar4 = local_6a8[0];
      lVar5 = DAT_180ccde38;
      local_6a8[0] = (longlong *)0x0;
      DAT_180ccde38 = (longlong)plVar4;
      if (lVar5 != 0) {
        (**(code **)(*(longlong *)lVar5 + 0x10))();
      }
      plVar4 = local_6a8[0];
      if (local_6a8[0] != (longlong *)0x0) {
        local_6a8[0] = (longlong *)0x0;
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    local_698 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 4421.68 3676.26\" width=\"4421.68\" height=\"3676.26\"><path fill=\"#FFFFFF\" d=\"M38.84,2765.23L1886.62,168.91c160.29-225.22,494.79-225.22,655.08,0l1841.11,2586.94c97.92,137.59-.45,328.33-169.32,328.33h-404.81c-103.92,0-197.3-63.46-235.56-160.09l-547.58-1383.07c-29.67-74.94-102.1-124.17-182.71-124.17h0c-35.51,0-61.24,33.84-51.76,68.05l534.27,1928.03c36.69,132.4-62.89,263.32-200.28,263.32h-363.96c-79.77,0-147.65-58.14-159.9-136.97l-326.6-2314.95c-8.53-54.86-102.84-53.9-113.56.58l-438.38,2320.78c-14.94,75.86-81.45,130.56-158.77,130.56h-363.14c-141.3,0-241.4-137.96-197.57-272.29l616.11-1888.27c14.81-45.4-19.02-92.04-66.78-92.04h-13.3c-77.84,0-148.35,45.95-179.78,117.17l-621.67,1408.75c-41.4,93.82-135.29,153.43-237.81,150.99l-296.71-7.06c-166.58-3.97-260.99-192.52-164.38-328.27Z\"/></svg>"
    ;
    lStack_690 = 0x348;
    local_6b0 = (char *)0x0;
    local_6b8 = (undefined **)&DAT_180cce2a4;
    FUN_180437bd0(local_6a8,&local_698,0x3d5e529e,&DAT_180cce2a0);
    plVar4 = local_6a8[0];
    lVar5 = DAT_180cce298;
    local_6a8[0] = (longlong *)0x0;
    DAT_180cce298 = (longlong)plVar4;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)lVar5 + 0x10))();
    }
    plVar4 = local_6a8[0];
    if (local_6a8[0] != (longlong *)0x0) {
      local_6a8[0] = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    lVar5 = -1;
    do {
      lStack_690 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lStack_690;
    } while ("<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"m21 21-4.34-4.34\" />\n  <circle cx=\"11\" cy=\"11\" r=\"8\" />\n</svg>"
             [lVar1] != '\0');
    local_698 = 
    "<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"m21 21-4.34-4.34\" />\n  <circle cx=\"11\" cy=\"11\" r=\"8\" />\n</svg>"
    ;
    local_6b0 = (char *)0x0;
    local_6b8 = (undefined **)&DAT_180cce234;
    auVar11 = ZEXT464(0x3f2aaaab);
    FUN_180437bd0(local_6a8,&local_698,auVar11._0_8_,&DAT_180cce230);
    plVar4 = local_6a8[0];
    lVar5 = DAT_180cce228;
    local_6a8[0] = (longlong *)0x0;
    DAT_180cce228 = (longlong)plVar4;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)lVar5 + 0x10))();
    }
    plVar4 = local_6a8[0];
    if (local_6a8[0] != (longlong *)0x0) {
      local_6a8[0] = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    lVar5 = -1;
    do {
      lStack_690 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lStack_690;
    } while ("<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M14 17H5\" />\n  <path d=\"M19 7h-9\" />\n  <circle cx=\"17\" cy=\"17\" r=\"3\" />\n  <circle cx=\"7\" cy=\"7\" r=\"3\" />\n</svg>"
             [lVar1] != '\0');
    local_698 = 
    "<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M14 17H5\" />\n  <path d=\"M19 7h-9\" />\n  <circle cx=\"17\" cy=\"17\" r=\"3\" />\n  <circle cx=\"7\" cy=\"7\" r=\"3\" />\n</svg>"
    ;
    local_6b0 = (char *)0x0;
    local_6b8 = (undefined **)&DAT_180cce244;
    FUN_180437bd0(local_6a8,&local_698,auVar11._0_8_,&DAT_180cce240);
    plVar4 = local_6a8[0];
    lVar5 = DAT_180cce238;
    local_6a8[0] = (longlong *)0x0;
    DAT_180cce238 = (longlong)plVar4;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)lVar5 + 0x10))();
    }
    plVar4 = local_6a8[0];
    if (local_6a8[0] != (longlong *)0x0) {
      local_6a8[0] = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    lVar5 = -1;
    do {
      lStack_690 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lStack_690;
    } while ("<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M20 20a2 2 0 0 0 2-2V8a2 2 0 0 0-2-2h-7.9a2 2 0 0 1-1.69-.9L9.6 3.9A2 2 0 0 0 7.93 3H4a2 2 0 0 0-2 2v13a2 2 0 0 0 2 2Z\" />\n</svg>"
             [lVar1] != '\0');
    local_698 = 
    "<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M20 20a2 2 0 0 0 2-2V8a2 2 0 0 0-2-2h-7.9a2 2 0 0 1-1.69-.9L9.6 3.9A2 2 0 0 0 7.93 3H4a2 2 0 0 0-2 2v13a2 2 0 0 0 2 2Z\" />\n</svg>"
    ;
    local_6b0 = (char *)0x0;
    local_6b8 = (undefined **)&DAT_180cce254;
    FUN_180437bd0(local_6a8,&local_698,auVar11._0_8_,&DAT_180cce250);
    plVar4 = local_6a8[0];
    lVar5 = DAT_180cce248;
    local_6a8[0] = (longlong *)0x0;
    DAT_180cce248 = (longlong)plVar4;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)lVar5 + 0x10))();
    }
    plVar4 = local_6a8[0];
    if (local_6a8[0] != (longlong *)0x0) {
      local_6a8[0] = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    lVar5 = -1;
    do {
      lStack_690 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lStack_690;
    } while ("<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M20 20a2 2 0 0 0 2-2V8a2 2 0 0 0-2-2h-7.9a2 2 0 0 1-1.69-.9L9.6 3.9A2 2 0 0 0 7.93 3H4a2 2 0 0 0-2 2v13a2 2 0 0 0 2 2Z\" />\n</svg>"
             [lVar1] != '\0');
    local_698 = 
    "<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M20 20a2 2 0 0 0 2-2V8a2 2 0 0 0-2-2h-7.9a2 2 0 0 1-1.69-.9L9.6 3.9A2 2 0 0 0 7.93 3H4a2 2 0 0 0-2 2v13a2 2 0 0 0 2 2Z\" />\n</svg>"
    ;
    local_6b0 = (char *)0x0;
    local_6b8 = (undefined **)&DAT_180cce264;
    FUN_180437bd0(local_6a8,&local_698,auVar11._0_8_,&DAT_180cce260);
    plVar4 = local_6a8[0];
    lVar5 = DAT_180cce258;
    local_6a8[0] = (longlong *)0x0;
    DAT_180cce258 = (longlong)plVar4;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)lVar5 + 0x10))();
    }
    plVar4 = local_6a8[0];
    if (local_6a8[0] != (longlong *)0x0) {
      local_6a8[0] = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    lVar5 = -1;
    do {
      lStack_690 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lStack_690;
    } while ("<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M17.5 19H9a7 7 0 1 1 6.71-9h1.79a4.5 4.5 0 1 1 0 9Z\" />\n</svg>"
             [lVar1] != '\0');
    local_698 = 
    "<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M17.5 19H9a7 7 0 1 1 6.71-9h1.79a4.5 4.5 0 1 1 0 9Z\" />\n</svg>"
    ;
    local_6b0 = (char *)0x0;
    local_6b8 = (undefined **)&DAT_180cce274;
    FUN_180437bd0(local_6a8,&local_698,auVar11._0_8_,&DAT_180cce270);
    plVar4 = local_6a8[0];
    lVar5 = DAT_180cce268;
    local_6a8[0] = (longlong *)0x0;
    DAT_180cce268 = (longlong)plVar4;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)lVar5 + 0x10))();
    }
    plVar4 = local_6a8[0];
    uVar10 = auVar11._0_8_;
    if (local_6a8[0] != (longlong *)0x0) {
      local_6a8[0] = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar10 = auVar11._0_8_;
    }
    lVar5 = -1;
    do {
      lStack_690 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lStack_690;
    } while ("<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M17.5 19H9a7 7 0 1 1 6.71-9h1.79a4.5 4.5 0 1 1 0 9Z\" />\n</svg>"
             [lVar1] != '\0');
    local_698 = 
    "<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M17.5 19H9a7 7 0 1 1 6.71-9h1.79a4.5 4.5 0 1 1 0 9Z\" />\n</svg>"
    ;
    local_6b0 = (char *)0x0;
    local_6b8 = (undefined **)&DAT_180cce284;
    FUN_180437bd0(local_6a8,&local_698,uVar10,&DAT_180cce280);
    plVar4 = local_6a8[0];
    lVar5 = DAT_180cce278;
    local_6a8[0] = (longlong *)0x0;
    DAT_180cce278 = (longlong)plVar4;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)lVar5 + 0x10))();
    }
    plVar4 = local_6a8[0];
    if (local_6a8[0] != (longlong *)0x0) {
      local_6a8[0] = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    lVar5 = -1;
    do {
      lStack_690 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lStack_690;
    } while ("<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M5 12h14\" />\n  <path d=\"M12 5v14\" />\n</svg>"
             [lVar1] != '\0');
    local_698 = 
    "<svg\n  xmlns=\"http://www.w3.org/2000/svg\"\n  width=\"24\"\n  height=\"24\"\n  viewBox=\"0 0 24 24\"\n  fill=\"none\"\n  stroke=\"#ffffff\"\n  stroke-width=\"2\"\n  stroke-linecap=\"round\"\n  stroke-linejoin=\"round\"\n>\n  <path d=\"M5 12h14\" />\n  <path d=\"M12 5v14\" />\n</svg>"
    ;
    local_6b0 = (char *)0x0;
    local_6b8 = (undefined **)&DAT_180cce294;
    auVar11 = ZEXT464(0x3f800000);
    FUN_180437bd0(local_6a8,&local_698,auVar11._0_8_,&DAT_180cce290);
    plVar4 = local_6a8[0];
    lVar5 = DAT_180cce288;
    local_6a8[0] = (longlong *)0x0;
    DAT_180cce288 = (longlong)plVar4;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)lVar5 + 0x10))();
    }
    plVar4 = local_6a8[0];
    if (local_6a8[0] != (longlong *)0x0) {
      local_6a8[0] = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    local_680 = (char *)0x1300000001;
    lStack_678 = 0x1400000012;
    uStack_670 = 0xd00000003;
    uStack_668 = 0xc00000006;
    local_660 = 0x1f00000008;
    uStack_658 = 0x1900000017;
    local_650 = 0x24;
    local_64c = 0xb;
    ppcVar9 = &local_680;
    uVar7 = 0;
    do {
      local_698 = (&PTR_s_<svg_xmlns__http:__www_w3_org_20_180811890)[*(int *)ppcVar9];
      lStack_690 = -1;
      do {
        lStack_690 = lStack_690 + 1;
      } while (local_698[lStack_690] != '\0');
      local_6b8 = (undefined **)(&DAT_180ccde64 + uVar7);
      local_6b0 = (char *)0x0;
      auVar11 = ZEXT1664(auVar11._0_16_);
      FUN_180437bd0(local_6a8,&local_698);
      plVar2 = local_6a8[0];
      local_6a8[0] = (longlong *)0x0;
      plVar4 = *(longlong **)((longlong)&DAT_180ccde58 + uVar7);
      *(longlong **)((longlong)&DAT_180ccde58 + uVar7) = plVar2;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      plVar4 = local_6a8[0];
      if (local_6a8[0] != (longlong *)0x0) {
        local_6a8[0] = (longlong *)0x0;
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      uVar7 = uVar7 + 0x10;
      ppcVar9 = (char **)((longlong)ppcVar9 + 4);
    } while (uVar7 < 0xe0);
    plVar4 = &DAT_180ccdf38;
    uVar7 = 0;
    do {
      local_698 = *(char **)((longlong)&PTR_s_<svg_xmlns__http:__www_w3_org_20_180811890 + uVar7);
      lStack_690 = -1;
      do {
        lStack_690 = lStack_690 + 1;
      } while (local_698[lStack_690] != '\0');
      local_6b8 = (undefined **)((longlong)plVar4 + 0xc);
      local_6b0 = (char *)0x0;
      FUN_180437bd0(local_6a8,&local_698,auVar11._0_8_);
      plVar3 = local_6a8[0];
      local_6a8[0] = (longlong *)0x0;
      plVar2 = (longlong *)*plVar4;
      *plVar4 = (longlong)plVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      plVar2 = local_6a8[0];
      if (local_6a8[0] != (longlong *)0x0) {
        local_6a8[0] = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      uVar7 = uVar7 + 8;
      plVar4 = plVar4 + 2;
    } while (uVar7 < 0x148);
    plVar4 = &DAT_180cce1c8;
    uVar7 = 0;
    do {
      local_698 = *(char **)((longlong)&PTR_s_<svg_xmlns__http:__www_w3_org_20_180811ae8 + uVar7);
      lStack_690 = -1;
      do {
        lStack_690 = lStack_690 + 1;
      } while (local_698[lStack_690] != '\0');
      local_6b8 = (undefined **)((longlong)plVar4 + 0xc);
      local_6b0 = (char *)0x0;
      FUN_180437bd0(local_6a8,&local_698,auVar11._0_8_);
      plVar3 = local_6a8[0];
      local_6a8[0] = (longlong *)0x0;
      plVar2 = (longlong *)*plVar4;
      *plVar4 = (longlong)plVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      plVar2 = local_6a8[0];
      if (local_6a8[0] != (longlong *)0x0) {
        local_6a8[0] = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      uVar7 = uVar7 + 8;
      plVar4 = plVar4 + 2;
    } while (uVar7 < 0x30);
    DAT_180ccddb0 = '\x01';
    FUN_18063ab10(local_648,0,0x600);
    local_6b0 = "unavailable";
    if (DAT_180cce298 != 0) {
      local_6b0 = "ready";
    }
    pcVar6 = "fallback";
    if (DAT_180ccde38 != 0) {
      pcVar6 = "ready";
    }
    local_6b8 = (undefined **)pcVar6;
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                  "logo=%s intro_splash=%s tabs=8 runtime_readiness=pending");
    if (local_648[0] != '\0') {
      ppuVar8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6b0 = local_648;
    local_6b8 = ppuVar8;
    FUN_1800f6900(1);
  }
}



