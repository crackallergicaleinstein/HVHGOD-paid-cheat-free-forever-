// FUN_180203560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180203560 */

ulonglong FUN_180203560(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  undefined *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined *local_58 [2];
  undefined1 *local_48;
  longlong local_40;
  char *local_38;
  undefined8 local_30;
  
  lVar6 = FUN_180203c30();
  uVar9 = 0;
  if (lVar6 == 0) {
LAB_180203be3:
    return uVar9 & 0xffffffffffffff00;
  }
  uVar15 = 0xffffffffffffffff;
  iVar11 = DAT_180c63638;
  if (DAT_180c63638 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c63630) {
      iVar11 = 0;
    }
    else {
      local_58[0] = &DAT_1808e8ae0;
      iVar11 = FUN_1805f68d0(&DAT_1808e8ae0);
      if (iVar11 != 0) goto LAB_180203c03;
      if (DAT_1808e8b2c == 0x7fffffff) {
        DAT_1808e8b2c = 0x7ffffffe;
        goto LAB_180203c18;
      }
      if ((DAT_180c63638 == 0) && (DAT_180c63630 <= UVar7)) {
        DAT_180c63638 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c63638 == 0) {
          DAT_180c63630 = UVar7 + 1000;
        }
        else {
          DAT_180c63630 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c63638;
      FUN_1805f68fc(&DAT_1808e8ae0);
    }
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  bVar2 = false;
  if (iVar11 + lVar6 != 0) {
    local_58[0] = (undefined *)0x0;
    cVar3 = FUN_1804514f0(local_58,iVar11 + lVar6,8);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  puVar13 = local_58[0];
  uVar9 = FUN_18017ea70();
  if (*(int *)(uVar9 + 4) != 0) {
    *(int *)(uVar9 + 4) = *(int *)(uVar9 + 4) + -1;
  }
  if ((!bVar2) || (puVar13 == (undefined *)0x0)) goto LAB_180203be3;
  if ((param_3 == 0) || (uVar16 = 2, *(char *)(param_3 + 0x90) == '\0')) {
    uVar16 = 1;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar14 = DAT_1808e8ad0;
  lVar8 = DAT_1808da460;
  if ((DAT_1808e8ad0 != DAT_1808da460) || (lVar10 = DAT_180c63628, DAT_180c63628 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar14 == lVar8) && (UVar7 < DAT_180c63620)) {
      lVar10 = 0;
    }
    else {
      local_58[0] = &DAT_1808e8a80;
      iVar11 = FUN_1805f68d0(&DAT_1808e8a80);
      if (iVar11 != 0) goto LAB_180203c03;
      if (DAT_1808e8acc == 0x7fffffff) {
        DAT_1808e8acc = 0x7ffffffe;
        goto LAB_180203c18;
      }
      uVar9 = 1000;
      if (DAT_1808e8ad0 == lVar8) {
        if ((DAT_180c63628 == 0) && (DAT_180c63620 <= UVar7)) goto LAB_180203793;
      }
      else {
        DAT_1808e8a70 = 1000;
LAB_180203793:
        lVar14 = -1;
        do {
          local_40 = lVar14 + 1;
          pcVar1 = "lient.dll:48895C24??48897424??574883EC??488D99????????488B71" + lVar14;
          lVar14 = local_40;
        } while (*pcVar1 != '\0');
        local_48 = &DAT_1808248d8;
        local_38 = "patterns::weapon_set_mesh_group_mask";
        local_30 = 0x24;
        DAT_180c63628 = FUN_1800e5d20(&local_38,&local_48);
        DAT_1808e8ad0 = lVar8;
        DAT_180c63620 = 0xffffffffffffffff;
        if (DAT_180c63628 == 0) {
          DAT_180c63620 = DAT_1808e8a70 + UVar7;
          uVar9 = 60000;
          if (DAT_1808e8a70 < 60000) {
            uVar9 = DAT_1808e8a70 * 2;
          }
        }
        DAT_1808e8a70 = uVar9;
      }
      lVar10 = DAT_180c63628;
      FUN_1805f68fc(&DAT_1808e8a80);
    }
  }
  bVar4 = FUN_180183be0(puVar13,uVar16,lVar10);
  if (bVar4 != 0) {
    iVar11 = DAT_180c63618;
    if (DAT_180c63618 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c63610) {
        iVar11 = 0;
      }
      else {
        local_58[0] = &DAT_1808e8a20;
        iVar11 = FUN_1805f68d0(&DAT_1808e8a20);
        if (iVar11 != 0) goto LAB_180203c03;
        if (DAT_1808e8a6c == 0x7fffffff) {
          DAT_1808e8a6c = 0x7ffffffe;
          goto LAB_180203c18;
        }
        if ((DAT_180c63618 == 0) && (DAT_180c63610 <= UVar7)) {
          DAT_180c63618 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
          if (DAT_180c63618 == 0) {
            DAT_180c63610 = UVar7 + 1000;
          }
          else {
            DAT_180c63610 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c63618;
        FUN_1805f68fc(&DAT_1808e8a20);
      }
    }
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (iVar11 + lVar6 == 0) {
      bVar2 = false;
    }
    else {
      local_58[0] = (undefined *)((ulonglong)local_58[0] & 0xffffffff00000000);
      cVar3 = FUN_1804514f0(local_58,iVar11 + lVar6,4);
      if (cVar3 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    uVar12 = local_58[0]._0_4_;
    lVar8 = FUN_18017ea70();
    iVar11 = *(int *)(lVar8 + 4);
    if (iVar11 != 0) {
      iVar11 = iVar11 + -1;
      *(int *)(lVar8 + 4) = iVar11;
    }
    if (!bVar2) {
      uVar12 = 0;
    }
    lVar8 = FUN_1803d4150(iVar11,uVar12);
    if (lVar8 == 0) goto LAB_180203bdd;
    iVar11 = DAT_180c63604;
    if (DAT_180c63604 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c63608) {
        iVar11 = 0;
      }
      else {
        local_58[0] = &DAT_1808e89d0;
        iVar11 = FUN_1805f68d0(&DAT_1808e89d0);
        if (iVar11 != 0) goto LAB_180203c03;
        if (DAT_1808e8a1c == 0x7fffffff) {
          DAT_1808e8a1c = 0x7ffffffe;
          goto LAB_180203c18;
        }
        if ((DAT_180c63604 == 0) && (DAT_180c63608 <= UVar7)) {
          DAT_180c63604 = FUN_1804174b0("C_EconEntity",0x537b0586);
          if (DAT_180c63604 == 0) {
            DAT_180c63608 = UVar7 + 1000;
          }
          else {
            DAT_180c63608 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c63604;
        FUN_1805f68fc(&DAT_1808e89d0);
      }
    }
    iVar5 = DAT_180c63600;
    if (DAT_180c63600 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c635f8) {
        iVar5 = 0;
      }
      else {
        local_58[0] = &DAT_1808e8980;
        iVar5 = FUN_1805f68d0(&DAT_1808e8980);
        if (iVar5 != 0) goto LAB_180203c03;
        if (DAT_1808e89cc == 0x7fffffff) {
          DAT_1808e89cc = 0x7ffffffe;
          goto LAB_180203c18;
        }
        if ((DAT_180c63600 == 0) && (DAT_180c635f8 <= UVar7)) {
          DAT_180c63600 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
          if (DAT_180c63600 == 0) {
            DAT_180c635f8 = UVar7 + 1000;
          }
          else {
            DAT_180c635f8 = 0xffffffffffffffff;
          }
        }
        iVar5 = DAT_180c63600;
        FUN_1805f68fc(&DAT_1808e8980);
      }
    }
    lVar14 = (longlong)iVar11 + iVar5 + lVar8;
    if (lVar14 != 0) {
      iVar11 = DAT_180c635e8;
      if (DAT_180c635e8 == 0) {
        UVar7 = GetTickCount64();
        if (UVar7 < DAT_180c635f0) {
          iVar11 = 0;
        }
        else {
          local_58[0] = &DAT_1808e8930;
          iVar11 = FUN_1805f68d0(&DAT_1808e8930);
          if (iVar11 != 0) {
LAB_180203c03:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808e897c == 0x7fffffff) {
            DAT_1808e897c = 0x7ffffffe;
LAB_180203c18:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c635e8 == 0) && (DAT_180c635f0 <= UVar7)) {
            DAT_180c635e8 = FUN_1804174b0("C_EconItemView",0x34b55816);
            if (DAT_180c635e8 == 0) {
              uVar15 = UVar7 + 1000;
            }
            DAT_180c635f0 = uVar15;
          }
          iVar11 = DAT_180c635e8;
          FUN_1805f68fc(&DAT_1808e8930);
        }
      }
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      lVar14 = iVar11 + lVar14;
      if (lVar14 == 0) {
        bVar2 = false;
      }
      else {
        local_58[0] = (undefined *)0x0;
        cVar3 = FUN_1804514f0(local_58,lVar14,8);
        if (cVar3 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      puVar13 = local_58[0];
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      if (!bVar2) {
        puVar13 = (undefined *)0x0;
      }
      if (puVar13 != (undefined *)0x0) {
        uVar9 = FUN_18022cc80(lVar6,lVar8);
        return uVar9;
      }
    }
  }
LAB_180203bdd:
  return (ulonglong)bVar4;
}



