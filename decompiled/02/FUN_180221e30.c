// FUN_180221e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180221e30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180221e30(undefined8 param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined *local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_a4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_a8 = param_3;
  local_a0 = param_2;
  local_98 = param_2;
  FUN_180150e80(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 7;
  param_2[7] = 8;
  *(undefined4 *)param_2 = 0x3f800000;
  FUN_1801406e0(param_2 + 3,0x10,param_2[1]);
  local_a4 = 1;
  local_90 = &DAT_180cc9e50;
  iVar9 = FUN_1805f68d0(&DAT_180cc9e50);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uStack_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_180218c10(&DAT_180cc8068,&local_78,param_3);
  plVar11 = plStack_70;
  if (DAT_180cca114 != '\0') {
    plVar14 = (longlong *)*plStack_70;
    if (plVar14 != plStack_70) {
      lVar16 = DAT_180cc9c90;
      lVar17 = DAT_180cca008;
      do {
        uVar1 = *(ushort *)(plVar14 + 2);
        uVar12 = (((ulonglong)(byte)uVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(uVar1 >> 8)) * 0x100000001b3 & DAT_180cc9cb8;
        lVar13 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar12 * 0x10);
        if (lVar13 == lVar16) {
LAB_180221fe1:
          lVar13 = 0;
        }
        else {
          uVar2 = *(ushort *)(lVar13 + 0x10);
          while (uVar1 != uVar2) {
            if (lVar13 == *(longlong *)(DAT_180cc9ca0 + uVar12 * 0x10)) goto LAB_180221fe1;
            lVar13 = *(longlong *)(lVar13 + 8);
            uVar2 = *(ushort *)(lVar13 + 0x10);
          }
        }
        lVar15 = lVar16;
        if (lVar13 != 0) {
          lVar15 = lVar13;
        }
        if ((((lVar15 != lVar16) &&
             (lVar13 = *(longlong *)(lVar15 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar13 != 0)) &&
            (*(char *)(lVar13 + 0xb0) == '\0')) && (DAT_180cca000 != lVar17)) {
          lVar13 = plVar14[2];
          lVar15 = DAT_180cca000;
          do {
            if (((*(char *)(lVar15 + 0x120) != '\0') && (*(char *)(lVar15 + 0x110) != '\0')) &&
               ((*(char *)(lVar15 + 0x111) == '\0' &&
                ((*(short *)(lVar15 + 0x10) == (short)lVar13 &&
                 (cVar8 = FUN_1801d8910(lVar15 + 0x18,plVar14 + 3), cVar8 != '\0')))))) {
              plVar10 = (longlong *)FUN_1800f9910(local_a0,local_88,plVar14 + 2);
              FUN_18017edf0(*plVar10 + 0x18,plVar14 + 3);
              lVar16 = DAT_180cc9c90;
              lVar17 = DAT_180cca008;
              break;
            }
            lVar15 = lVar15 + 0x128;
          } while (lVar15 != lVar17);
        }
        plVar14 = (longlong *)*plVar14;
      } while (plVar14 != plVar11);
      param_2 = local_a0;
      param_3 = local_a8;
    }
    puVar7 = DAT_180cc9ff0;
    puVar6 = DAT_180cc9fe8;
    plVar11 = plStack_70;
    if (DAT_180cca114 != '\0') {
      for (; puVar6 != puVar7; puVar6 = puVar6 + 0x25) {
        if (((int)puVar6[0x21] == param_3) && (*puVar6 < 0xf000000000000000)) {
          uVar12 = (((ulonglong)(byte)puVar6[2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)puVar6 + 0x11)) * 0x100000001b3 & uStack_48;
          plVar14 = *(longlong **)(lStack_60 + 8 + uVar12 * 0x10);
          if (plVar14 != plVar11) {
            plVar10 = *(longlong **)(lStack_60 + uVar12 * 0x10);
            sVar4 = (short)plVar14[2];
            plVar5 = plVar14;
            sVar3 = sVar4;
            while ((short)puVar6[2] != sVar3) {
              if (plVar5 == plVar10) goto LAB_1802221e7;
              plVar5 = (longlong *)plVar5[1];
              sVar3 = (short)plVar5[2];
            }
            if (plVar14 == plVar11) {
LAB_180222253:
                    /* WARNING: Subroutine does not return */
              FUN_1805fa8dc("invalid unordered_map<K, T> key");
            }
            while ((short)puVar6[2] != sVar4) {
              if (plVar14 == plVar10) goto LAB_180222253;
              plVar14 = (longlong *)plVar14[1];
              sVar4 = (short)plVar14[2];
            }
            if (plVar14 == (longlong *)0x0) goto LAB_180222253;
            cVar8 = FUN_1801d8910(plVar14 + 3,puVar6 + 3);
            if (cVar8 != '\0') {
              plVar11 = (longlong *)FUN_1800f9910(param_2,local_88,puVar6 + 2);
              FUN_18017edf0(*plVar11 + 0x18,puVar6 + 3);
              plVar11 = plStack_70;
            }
            param_3 = local_a8;
          }
        }
LAB_1802221e7:
      }
    }
  }
  FUN_1800cf8e0(&local_78);
  FUN_1805f68fc(&DAT_180cc9e50);
}



