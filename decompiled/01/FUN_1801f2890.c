// FUN_1801f2890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f2890 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f2890(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  byte *_Buf1;
  byte bVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  bool bVar17;
  byte bVar18;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  uint local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 ******local_88 [2];
  longlong local_78;
  ulonglong local_70;
  undefined8 ******local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_c0 = (undefined8 *)((ulonglong)local_c0 & 0xffffffff00000000);
  bVar17 = false;
  local_b0 = param_1;
  if (param_2 != 0) {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    bVar5 = false;
    if (param_2 + 0x280 != 0) {
      local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
      cVar7 = FUN_1804514f0(&local_c8,param_2 + 0x280,4);
      if (cVar7 == '\0') {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    iVar15 = (uint)local_c8;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    iVar20 = 0;
    if (bVar5) {
      iVar20 = iVar15;
    }
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (param_2 + 0x288 == 0) {
      bVar5 = false;
      puVar16 = local_b0;
    }
    else {
      local_c0 = (undefined8 *)0x0;
      cVar7 = FUN_1804514f0(&local_c0,param_2 + 0x288,8);
      if (cVar7 == '\0') {
        bVar5 = false;
        puVar16 = local_b0;
      }
      else {
        bVar5 = true;
        puVar16 = local_c0;
      }
    }
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    puVar19 = (undefined8 *)0x0;
    if (bVar5) {
      puVar19 = puVar16;
    }
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    bVar5 = false;
    if (param_2 + 0xf8 != 0) {
      local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
      cVar7 = FUN_1804514f0(&local_c8,param_2 + 0xf8,4);
      if (cVar7 == '\0') {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    iVar15 = (uint)local_c8;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    iVar22 = 0;
    if (bVar5) {
      iVar22 = iVar15;
    }
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,iVar22);
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (param_2 + 0x100 == 0) {
      bVar5 = false;
      puVar16 = local_b0;
    }
    else {
      local_c8 = (undefined8 *)0x0;
      cVar7 = FUN_1804514f0(&local_c8,param_2 + 0x100,8);
      if (cVar7 == '\0') {
        bVar5 = false;
        puVar16 = local_b0;
      }
      else {
        bVar5 = true;
        puVar16 = local_c8;
      }
    }
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    puVar10 = (undefined8 *)0x0;
    if (bVar5) {
      puVar10 = puVar16;
    }
    if ((((iVar20 - 1U < 0x40) && (puVar19 != (undefined8 *)0x0)) && (iVar22 - 1U < 0x40)) &&
       (puVar10 != (undefined8 *)0x0)) {
      local_98 = 0xffffffffffffffff;
      iVar15 = 0;
      local_b8 = 0xffffffff;
      local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,0xffffffff);
      if (0 < iVar20) {
        iVar22 = 0;
        local_a0 = puVar10;
        do {
          lVar9 = FUN_18017ea70();
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
          lVar9 = (longlong)iVar22 + 8 + (longlong)puVar19;
          bVar5 = false;
          if (lVar9 != 0) {
            local_a8 = (undefined8 *)0x0;
            cVar7 = FUN_1804514f0(&local_a8,lVar9,8);
            if (cVar7 == '\0') {
              bVar5 = false;
            }
            else {
              bVar5 = true;
              puVar10 = local_a8;
            }
          }
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          if ((bVar5) && (puVar10 != (undefined8 *)0x0)) {
            FUN_180184460(local_88,puVar10);
            bVar17 = true;
            ppppppuVar11 = local_88;
            if (0xf < local_70) {
              ppppppuVar11 = local_88[0];
            }
            if ((local_78 != 0x15) ||
               (iVar8 = memcmp(ppppppuVar11,"first_or_third_person",0x15), iVar8 != 0))
            goto LAB_1801f2b37;
            bVar5 = true;
          }
          else {
LAB_1801f2b37:
            bVar5 = false;
          }
          if (bVar17) {
            bVar17 = false;
            FUN_18015c010(local_88);
          }
          if (bVar5) {
            local_98 = CONCAT44(local_98._4_4_,iVar15);
            if (0 < (int)local_c0) {
              uVar21 = 0xffffffff;
              puVar16 = local_a0;
              puVar19 = local_a0;
              local_c0 = (undefined8 *)((ulonglong)local_c0 & 0xffffffff);
              goto LAB_1801f2bb0;
            }
            break;
          }
          iVar15 = iVar15 + 1;
          iVar22 = iVar22 + 0x50;
        } while (iVar15 < iVar20);
      }
    }
  }
  goto LAB_1801f2b5e;
LAB_1801f2bb0:
  do {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (puVar16 == (undefined8 *)0x0) {
      bVar17 = false;
    }
    else {
      local_a8 = (undefined8 *)0x0;
      cVar7 = FUN_1804514f0(&local_a8,puVar16,8);
      if (cVar7 == '\0') {
        bVar17 = false;
      }
      else {
        bVar17 = true;
        puVar19 = local_a8;
      }
    }
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if ((bVar17) && (puVar19 != (undefined8 *)0x0)) {
      FUN_180184460(local_68,puVar19);
      uVar6 = local_58;
      ppppppuVar11 = local_68;
      if (0xf < local_50) {
        ppppppuVar11 = local_68[0];
      }
      if ((0x16 < local_58) &&
         (iVar15 = memcmp(ppppppuVar11,"first_or_third_person_@",0x17), iVar15 == 0)) {
        uVar1 = uVar6 - 0x17;
        ppppppuVar2 = (undefined8 ******)((longlong)ppppppuVar11 + 0x17);
        if ((2 < uVar1) &&
           (lVar14 = uVar6 + (longlong)ppppppuVar11,
           lVar9 = thunk_FUN_1805f9970(ppppppuVar2,lVar14,&DAT_1807cc6e4), lVar9 != lVar14)) {
          lVar14 = (lVar9 - (longlong)ppppppuVar11) + -0x17;
          if (lVar14 != -1) {
            ppppppuVar3 = (undefined8 ******)((longlong)ppppppuVar2 + lVar14);
            bVar18 = 0;
            ppppppuVar12 = ppppppuVar2;
            if ((ppppppuVar2 != ppppppuVar3) && (*(byte *)ppppppuVar2 == 0x2d)) {
              bVar18 = 1;
              ppppppuVar12 = ppppppuVar11 + 3;
            }
            uVar13 = 0;
            bVar17 = false;
            bVar5 = false;
            if (ppppppuVar12 != ppppppuVar3) {
              do {
                bVar17 = bVar5;
                bVar4 = (&DAT_1807c5b10)[*(byte *)ppppppuVar12];
                if (9 < bVar4) break;
                if ((uVar13 < 0xccccccc) || ((uVar13 == 0xccccccc && (bVar4 <= (byte)(bVar18 + 7))))
                   ) {
                  uVar13 = (uint)bVar4 + uVar13 * 10;
                }
                else {
                  bVar17 = true;
                }
                ppppppuVar12 = (undefined8 ******)((longlong)ppppppuVar12 + 1);
                bVar5 = bVar17;
              } while (ppppppuVar12 != ppppppuVar3);
              uVar21 = local_b8;
            }
            if (((longlong)ppppppuVar12 - (longlong)ppppppuVar2 != (ulonglong)bVar18) && (!bVar17))
            {
              if (bVar18 != 0) {
                uVar13 = -uVar13;
              }
              if ((ppppppuVar12 == ppppppuVar3) && (uVar13 < 0x40)) {
                lVar9 = (lVar9 - (longlong)ppppppuVar11) + -0x14;
                lVar14 = uVar1 - lVar9;
                _Buf1 = (byte *)((longlong)ppppppuVar2 + lVar9);
                if ((lVar14 == 0x1f) &&
                   (iVar15 = memcmp(_Buf1,"thirdperson_hide_default_gloves",0x1f), iVar15 == 0)) {
LAB_1801f2d80:
                  local_98 = CONCAT44(uVar13,(undefined4)local_98);
                  uVar21 = uVar13;
                  local_b8 = uVar13;
LAB_1801f2d89:
                  if ((lVar14 != 0x1f) ||
                     (iVar15 = memcmp(_Buf1,"firstperson_hide_default_gloves",0x1f), iVar15 != 0))
                  goto LAB_1801f2da5;
                }
                else {
                  if (lVar14 != 0x13) goto LAB_1801f2d89;
                  iVar15 = memcmp(_Buf1,"thirdperson_default",0x13);
                  if ((iVar15 == 0) && ((int)uVar21 < 0)) goto LAB_1801f2d80;
LAB_1801f2da5:
                  if ((lVar14 != 0x13) ||
                     ((iVar15 = memcmp(_Buf1,"firstperson_default",0x13), iVar15 != 0 ||
                      (-1 < (int)(uint)local_c8)))) goto LAB_1801f2dc9;
                }
                local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,uVar13);
              }
            }
          }
        }
      }
LAB_1801f2dc9:
      FUN_18015c010(local_68);
    }
    puVar16 = puVar16 + 1;
    local_c0 = (undefined8 *)((longlong)local_c0 - 1);
  } while (local_c0 != (undefined8 *)0x0);
  if (((-1 < (int)uVar21) && (-1 < (int)(uint)local_c8)) && (uVar21 != (uint)local_c8)) {
    *local_b0 = local_98;
    *(uint *)(local_b0 + 1) = (uint)local_c8;
    *(undefined1 *)((longlong)local_b0 + 0xc) = 1;
  }
LAB_1801f2b5e:
  *(undefined1 *)((longlong)local_b0 + 0xc) = 0;
}



