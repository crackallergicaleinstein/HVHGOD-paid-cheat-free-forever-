// FUN_180111fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180111fa0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180111fa0(undefined8 *param_1,undefined1 *param_2,char param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong *plVar5;
  short sVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  char *pcVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 local_48;
  
  switch(*param_2) {
  case 0:
switchD_180111fe4_caseD_0:
    pcVar14 = "null";
    lVar18 = 4;
    goto LAB_1801129ee;
  case 1:
    plVar11 = (longlong *)*param_1;
    puVar10 = (undefined8 *)*plVar11;
    if (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0) {
      if (param_3 == '\0') {
        (*(code *)*puVar10)(plVar11,0x18000007b);
        uVar16 = 0;
        plVar11 = *(longlong **)**(undefined8 **)(param_2 + 8);
        if ((*(undefined8 **)(param_2 + 8))[1] != 1) {
          do {
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
            FUN_180140f80(param_1,plVar11 + 4,0);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1806c0eac);
            FUN_180111fa0(param_1,plVar11 + 8,0,0,param_5,param_6);
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
            plVar13 = (longlong *)plVar11[2];
            uVar16 = uVar16 + 1;
            if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar13 + 0x19);
              plVar11 = plVar13;
              plVar13 = (longlong *)*plVar13;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar13 + 0x19);
                plVar11 = plVar13;
                plVar13 = (longlong *)*plVar13;
              }
            }
            else {
              cVar1 = *(char *)(plVar11[1] + 0x19);
              plVar12 = (longlong *)plVar11[1];
              plVar13 = plVar11;
              while ((plVar11 = plVar12, cVar1 == '\0' && (plVar13 == (longlong *)plVar11[2]))) {
                cVar1 = *(char *)(plVar11[1] + 0x19);
                plVar12 = (longlong *)plVar11[1];
                plVar13 = plVar11;
              }
            }
          } while (uVar16 < *(longlong *)(*(longlong *)(param_2 + 8) + 8) - 1U);
        }
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
        FUN_180140f80(param_1,plVar11 + 4,0);
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1806c0eac,2);
        FUN_180111fa0(param_1,plVar11 + 8,0,0,param_5,param_6);
      }
      else {
        (*(code *)puVar10[1])(plVar11,&DAT_1806c0ea0,2);
        plVar11 = param_1 + 0x4c;
        uVar19 = param_6 + param_5;
        uVar16 = (ulonglong)uVar19;
        if ((ulonglong)param_1[0x4e] < uVar16) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = param_1[0x4e];
          uVar8 = SUB168(ZEXT816(2) * auVar2,0);
          if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
            uVar8 = 0xffffffffffffffff;
          }
          FUN_1800f5630(plVar11,uVar8,0x20);
        }
        uVar7 = 0;
        plVar13 = *(longlong **)**(undefined8 **)(param_2 + 8);
        if ((*(undefined8 **)(param_2 + 8))[1] != 1) {
          do {
            plVar12 = plVar11;
            if (0xf < (ulonglong)param_1[0x4f]) {
              plVar12 = (longlong *)*plVar11;
            }
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar12,uVar16);
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
            FUN_180140f80(param_1,plVar13 + 4,0);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1806c0ea4,3);
            FUN_180111fa0(param_1,plVar13 + 8,1,0,param_5,uVar19);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1806c0ea8,2);
            plVar12 = (longlong *)plVar13[2];
            uVar7 = uVar7 + 1;
            if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar12 + 0x19);
              plVar13 = plVar12;
              plVar12 = (longlong *)*plVar12;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar12 + 0x19);
                plVar13 = plVar12;
                plVar12 = (longlong *)*plVar12;
              }
            }
            else {
              cVar1 = *(char *)(plVar13[1] + 0x19);
              plVar5 = (longlong *)plVar13[1];
              plVar12 = plVar13;
              while ((plVar13 = plVar5, cVar1 == '\0' && (plVar12 == (longlong *)plVar13[2]))) {
                cVar1 = *(char *)(plVar13[1] + 0x19);
                plVar5 = (longlong *)plVar13[1];
                plVar12 = plVar13;
              }
            }
          } while (uVar7 < *(longlong *)(*(longlong *)(param_2 + 8) + 8) - 1U);
        }
        if (0xf < (ulonglong)param_1[0x4f]) {
          plVar11 = (longlong *)*plVar11;
        }
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar11,uVar16);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
        FUN_180140f80(param_1,plVar13 + 4,0);
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1806c0ea4,3);
        FUN_180111fa0(param_1,plVar13 + 8,1,0,param_5,uVar19);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
        plVar11 = param_1 + 0x4c;
        if (0xf < (ulonglong)param_1[0x4f]) {
          plVar11 = (longlong *)*plVar11;
        }
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar11,param_6);
      }
      goto LAB_180112925;
    }
    pcVar9 = (code *)puVar10[1];
    pcVar14 = "{}";
    lVar18 = 2;
    break;
  case 2:
    plVar13 = *(longlong **)(param_2 + 8);
    plVar11 = (longlong *)*param_1;
    puVar10 = (undefined8 *)*plVar11;
    if (*plVar13 != plVar13[1]) {
      if (param_3 == '\0') {
        (*(code *)*puVar10)(plVar11,CONCAT71((int7)((ulonglong)plVar13 >> 8),0x5b));
        plVar11 = *(longlong **)(param_2 + 8);
        lVar18 = *plVar11;
        if (lVar18 != plVar11[1] + -0x10) {
          do {
            FUN_180111fa0(param_1,lVar18,0,0,param_5,param_6);
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
            plVar11 = *(longlong **)(param_2 + 8);
            lVar18 = lVar18 + 0x10;
          } while (lVar18 != plVar11[1] + -0x10);
        }
        FUN_180111fa0(param_1,plVar11[1] + -0x10,0,0,param_5,param_6);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x5d);
        return;
      }
      (*(code *)puVar10[1])(plVar11,&DAT_1806c0eb4,2);
      uVar16 = param_1[0x4e];
      uVar19 = param_5 + param_6;
      if (uVar16 < uVar19) {
        puVar10 = param_1 + 0x4c;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar16;
        uVar7 = SUB168(ZEXT816(2) * auVar3,0);
        if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
          uVar7 = 0xffffffffffffffff;
        }
        if (uVar16 < uVar7) {
          uVar17 = uVar7 - uVar16;
          if (param_1[0x4f] - uVar16 < uVar17) {
            FUN_18013fa60(puVar10,uVar17,local_48,uVar17,0x20);
          }
          else {
            param_1[0x4e] = uVar7;
            if (0xf < (ulonglong)param_1[0x4f]) {
              puVar10 = (undefined8 *)*puVar10;
            }
            FUN_18063ab10((longlong)puVar10 + uVar16,0x20,uVar17);
            *(undefined1 *)((longlong)puVar10 + uVar16 + uVar17) = 0;
          }
        }
        else {
          param_1[0x4e] = uVar7;
          if (0xf < (ulonglong)param_1[0x4f]) {
            puVar10 = (undefined8 *)*puVar10;
          }
          *(undefined1 *)((longlong)puVar10 + uVar7) = 0;
        }
      }
      lVar18 = **(longlong **)(param_2 + 8);
      if (lVar18 != (*(longlong **)(param_2 + 8))[1] + -0x10) {
        do {
          puVar10 = param_1 + 0x4c;
          if (0xf < (ulonglong)param_1[0x4f]) {
            puVar10 = (undefined8 *)param_1[0x4c];
          }
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar10,uVar19);
          FUN_180111fa0(param_1,lVar18,1,0,param_5,uVar19);
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1806c0ea8,2);
          lVar18 = lVar18 + 0x10;
        } while (lVar18 != *(longlong *)(*(longlong *)(param_2 + 8) + 8) + -0x10);
      }
      plVar11 = param_1 + 0x4c;
      plVar13 = plVar11;
      if (0xf < (ulonglong)param_1[0x4f]) {
        plVar13 = (longlong *)*plVar11;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar13,uVar19);
      FUN_180111fa0(param_1,*(longlong *)(*(longlong *)(param_2 + 8) + 8) + -0x10,1,0,param_5,uVar19
                   );
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
      if (0xf < (ulonglong)param_1[0x4f]) {
        plVar11 = (longlong *)*plVar11;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar11,param_6);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x5d);
      return;
    }
    pcVar9 = (code *)puVar10[1];
    pcVar14 = "[]";
    lVar18 = 2;
    break;
  case 3:
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x180000022);
    FUN_180140f80(param_1,*(undefined8 *)(param_2 + 8),0);
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    return;
  case 4:
    plVar11 = (longlong *)*param_1;
    pcVar9 = *(code **)(*plVar11 + 8);
    if (param_2[8] == '\0') {
      lVar18 = 5;
      pcVar14 = "false";
    }
    else {
      lVar18 = 4;
      pcVar14 = "true";
    }
    break;
  case 5:
    FUN_18013f7d0(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case 6:
    FUN_18013f690(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case 7:
    sVar6 = thunk_FUN_1806243d0(*(undefined8 *)(param_2 + 8));
    if (0 < sVar6) goto switchD_180111fe4_caseD_0;
    pcVar14 = (char *)(param_1 + 2);
    lVar18 = FUN_180154190(pcVar14);
    plVar11 = (longlong *)*param_1;
    lVar18 = lVar18 - (longlong)pcVar14;
    pcVar9 = *(code **)(*plVar11 + 8);
    break;
  case 8:
    plVar11 = (longlong *)*param_1;
    if (param_3 != '\0') {
      (**(code **)(*plVar11 + 8))(plVar11,&DAT_1806c0ea0,2);
      plVar11 = param_1 + 0x4c;
      uVar19 = param_5 + param_6;
      if ((ulonglong)param_1[0x4e] < (ulonglong)uVar19) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1[0x4e];
        uVar8 = SUB168(ZEXT816(2) * auVar4,0);
        if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
          uVar8 = 0xffffffffffffffff;
        }
        FUN_1800f5630(plVar11,uVar8,0x20);
      }
      if (0xf < (ulonglong)param_1[0x4f]) {
        plVar11 = (longlong *)*plVar11;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar11,(ulonglong)uVar19);
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,"\"bytes\": [",10);
      puVar10 = *(undefined8 **)(param_2 + 8);
      puVar15 = (undefined1 *)*puVar10;
      if (puVar15 != (undefined1 *)puVar10[1]) {
        if (puVar15 != (undefined1 *)puVar10[1] + -1) {
          do {
            FUN_18013f550(param_1,*puVar15);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1806c0ec4,2);
            puVar10 = *(undefined8 **)(param_2 + 8);
            puVar15 = puVar15 + 1;
          } while (puVar15 != (undefined1 *)(puVar10[1] + -1));
        }
        FUN_18013f550(param_1,*(undefined1 *)(puVar10[1] + -1));
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1806c0ec8,3);
      plVar11 = param_1 + 0x4c;
      if (0xf < (ulonglong)param_1[0x4f]) {
        plVar11 = (longlong *)*plVar11;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar11,uVar19);
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,"\"subtype\": ",0xb);
      if (*(char *)(*(longlong *)(param_2 + 8) + 0x20) == '\0') {
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1806c0edc,4);
      }
      else {
        FUN_18013f690(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x18));
      }
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
      plVar11 = param_1 + 0x4c;
      if (0xf < (ulonglong)param_1[0x4f]) {
        plVar11 = (longlong *)*plVar11;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar11,param_6);
LAB_180112925:
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x7d);
      return;
    }
    (**(code **)(*plVar11 + 8))(plVar11,"{\"bytes\":[",10);
    puVar10 = *(undefined8 **)(param_2 + 8);
    puVar15 = (undefined1 *)*puVar10;
    if (puVar15 != (undefined1 *)puVar10[1]) {
      if (puVar15 != (undefined1 *)puVar10[1] + -1) {
        do {
          FUN_18013f550(param_1,*puVar15);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          puVar10 = *(undefined8 **)(param_2 + 8);
          puVar15 = puVar15 + 1;
        } while (puVar15 != (undefined1 *)(puVar10[1] + -1));
      }
      FUN_18013f550(param_1,*(undefined1 *)(puVar10[1] + -1));
    }
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,"],\"subtype\":",0xc);
    if (*(char *)(*(longlong *)(param_2 + 8) + 0x20) != '\0') {
      FUN_18013f690(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x18));
      goto LAB_180112925;
    }
    lVar18 = 5;
    pcVar14 = "null}";
    goto LAB_1801129ee;
  case 9:
    lVar18 = 0xb;
    pcVar14 = "<discarded>";
LAB_1801129ee:
    plVar11 = (longlong *)*param_1;
    pcVar9 = *(code **)(*plVar11 + 8);
    break;
  default:
    goto switchD_180111fe4_default;
  }
  (*pcVar9)(plVar11,pcVar14,lVar18);
switchD_180111fe4_default:
  return;
}



