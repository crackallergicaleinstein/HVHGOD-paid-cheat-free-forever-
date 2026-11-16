// FUN_1805966a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805966a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805966a0(undefined8 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined2 extraout_var;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  short sVar19;
  undefined1 auStack_7e8 [32];
  undefined8 local_7c8;
  longlong local_7c0;
  undefined1 local_7b8;
  undefined4 local_7b0;
  code *local_7a8;
  undefined1 local_798 [8];
  undefined4 *local_790;
  undefined4 local_788;
  undefined4 local_784;
  undefined1 local_778 [8];
  longlong local_770;
  int local_738;
  undefined1 local_71c;
  undefined1 local_71a;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_7e8;
  *param_2 = 1;
  lVar14 = FUN_18057ae80(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  *(longlong *)(param_2 + 0xa6) = lVar14;
  lVar15 = FUN_180573a90(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa8) = lVar15;
  if (lVar15 != 0) {
    uVar16 = FUN_180573a90(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
    *(undefined8 *)(param_2 + 0xc0) = uVar16;
    iVar9 = FUN_18059b070(param_2);
    if (((iVar9 == 0) && (-1 < param_3)) && ((short)param_3 == 0)) {
      param_2[4] = param_2[0x90];
      uVar13 = param_2[2];
      uVar10 = uVar13 | 0xa11;
      param_2[2] = uVar10;
      param_2[1] = 0;
      if (*(char *)(param_2 + 0x41) != '\0') {
        uVar10 = uVar13 | 0xa15;
        param_2[2] = uVar10;
      }
      lVar4 = *(longlong *)(param_2 + 0xb8);
      if (lVar4 != 0) {
        param_2[2] = uVar10 | 0x100;
      }
      pcVar18 = *(char **)(param_2 + 0x3c);
      *(char **)(param_2 + 6) = pcVar18;
      *(undefined8 *)(param_2 + 8) = 0;
      if (pcVar18 == (char *)0x0) {
        if (*(longlong *)(param_2 + 0x76) != 0) {
          *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x76);
        }
      }
      else {
        pcVar17 = *(char **)(param_2 + 0x3a);
        if (pcVar17 != (char *)0x0) {
          cVar1 = *pcVar17;
          while (cVar1 != '\0') {
            cVar2 = *pcVar18;
            if (cVar1 == cVar2) {
              pcVar18 = pcVar18 + 1;
LAB_1805967fc:
              pcVar17 = pcVar17 + 1;
            }
            else {
              if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_1805967fc;
              if ((cVar2 != ' ') && (cVar2 != '-')) {
                if (cVar2 == '\0') {
                  *(char **)(param_2 + 8) = pcVar17;
                }
                goto LAB_180596842;
              }
              pcVar18 = pcVar18 + 1;
            }
            cVar1 = *pcVar17;
          }
          *(char **)(param_2 + 8) = "Regular";
        }
      }
LAB_180596842:
      if (*(longlong *)(param_2 + 8) == 0) {
        pcVar18 = "Regular";
        if (*(char **)(param_2 + 0x3e) != (char *)0x0) {
          pcVar18 = *(char **)(param_2 + 0x3e);
        }
        *(char **)(param_2 + 8) = pcVar18;
      }
      param_2[3] = 0;
      iVar9 = param_2[0x40];
      if (iVar9 != 0) {
        param_2[3] = 1;
      }
      pcVar18 = *(char **)(param_2 + 0x3e);
      if ((pcVar18 != (char *)0x0) &&
         ((iVar11 = strcmp(pcVar18,"Bold"), iVar11 == 0 ||
          (iVar11 = strcmp(pcVar18,"Black"), iVar11 == 0)))) {
        param_2[3] = iVar9 != 0 | 2;
      }
      param_2[10] = 0;
      *(undefined8 *)(param_2 + 0xc) = 0;
      param_2[0x16] = (int)*(short *)((longlong)param_2 + 0x27e);
      sVar3 = *(short *)((longlong)param_2 + 0x282);
      uVar8 = *(ushort *)(param_2 + 0x1a);
      param_2[0x17] = (int)sVar3;
      param_2[0x18] = param_2[0xa1] + 0xffff >> 0x10;
      param_2[0x19] = param_2[0xa2] + 0xffff >> 0x10;
      if (uVar8 == 0) {
        uVar8 = 1000;
        *(undefined2 *)(param_2 + 0x1a) = 1000;
      }
      sVar19 = (short)((uint)(param_2[0xa2] + 0xffff) >> 0x10);
      *(short *)((longlong)param_2 + 0x6a) = sVar19;
      *(short *)(param_2 + 0x1b) = sVar3;
      sVar7 = (short)(((uint)uVar8 * 0xc) / 10);
      *(short *)((longlong)param_2 + 0x6e) = sVar7;
      if ((int)sVar7 < (int)sVar19 - (int)sVar3) {
        *(short *)((longlong)param_2 + 0x6e) = sVar19 - sVar3;
      }
      *(short *)(param_2 + 0x1c) = (short)((uint)(param_2[0xa1] + 0xffff) >> 0x10);
      lVar5 = *(longlong *)(param_2 + 0xa8);
      local_7a8 = FUN_18059b630;
      local_7c8 = *(undefined8 *)(param_2 + 0x92);
      local_7b0 = 0;
      local_7b8 = 0;
      local_7c0 = lVar4;
      iVar9 = (*(code *)**(undefined8 **)(lVar5 + 0x18))(local_778,param_2,0,0);
      iVar11 = 0;
      if (iVar9 == 0) {
        iVar9 = 0;
        local_71c = 0;
        local_104 = param_2[0x88];
        local_100 = *(undefined8 *)(param_2 + 0x8a);
        local_f8 = *(undefined8 *)(param_2 + 0x8c);
        local_f0 = *(undefined8 *)(param_2 + 0x8e);
        local_58 = *(undefined8 *)(param_2 + 0xbe);
        local_50 = param_2[0xbc];
        local_71a = 1;
        if (0 < (int)param_2[0x90]) {
          do {
            local_798[0] = 0;
            iVar12 = FUN_18059b690(local_778,iVar11,&local_790,local_798);
            if ((iVar12 == 0) &&
               (plVar6 = *(longlong **)(*(longlong *)(local_770 + 0xd0) + 0x50),
               plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 8))(plVar6[1],&local_790);
            }
            if ((iVar11 == 0) || (iVar9 < local_738)) {
              iVar9 = local_738;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)param_2[0x90]);
        }
        (**(code **)(*(longlong *)(lVar5 + 0x18) + 8))(local_778);
        FUN_1805778f0(iVar9);
        *(undefined2 *)(param_2 + 0x1c) = extraout_var;
      }
      *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)((longlong)param_2 + 0x6e);
      *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x106);
      *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x42);
      if (lVar14 != 0) {
        plVar6 = *(longlong **)(lVar15 + 0x40);
        local_784 = 0x10003;
        local_788 = 0x756e6963;
        local_790 = param_2;
        uVar13 = FUN_180573150(plVar6[3],0,&local_790,0);
        if (((uVar13 == 0) || ((uVar13 & 0xff) == 0xa3)) || ((uVar13 & 0xff) == 7)) {
          iVar9 = param_2[0x78];
          if (iVar9 == 1) {
            local_788 = 0x41444243;
            local_784 = 0x20007;
            lVar14 = plVar6[2];
          }
          else if (iVar9 == 2) {
            local_788 = 0x41444f42;
            local_784 = 7;
            lVar14 = *plVar6;
          }
          else if (iVar9 == 3) {
            local_788 = 0x6c617431;
            local_784 = 0x30007;
            lVar14 = plVar6[3];
          }
          else {
            if (iVar9 != 4) {
            }
            local_788 = 0x41444245;
            local_784 = 0x10007;
            lVar14 = plVar6[1];
          }
          if (lVar14 != 0) {
            FUN_180573150(lVar14,0,&local_790,0);
          }
        }
      }
    }
  }
}



