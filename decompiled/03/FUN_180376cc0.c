// FUN_180376cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180376cc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180376cc0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined *local_58 [2];
  char *local_48;
  longlong local_40;
  char *local_38;
  undefined8 local_30;
  
  lVar5 = DAT_180c64430;
  if (DAT_180902c30 == -1) {
    return;
  }
  if (DAT_180c64430 == 0) {
    puVar9 = (undefined *)0x0;
LAB_180376d64:
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar4 = DAT_180901750;
    lVar5 = DAT_1808da460;
    if ((DAT_180901750 != DAT_1808da460) || (lVar7 = DAT_180c6fa38, DAT_180c6fa38 == 0)) {
      UVar6 = GetTickCount64();
      if ((lVar4 == lVar5) && (UVar6 < DAT_180c6fa40)) {
        lVar7 = 0;
      }
      else {
        local_58[0] = &DAT_180901770;
        iVar3 = FUN_1805f68d0(&DAT_180901770);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1809017bc == 0x7fffffff) {
          DAT_1809017bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        uVar8 = 1000;
        if (DAT_180901750 == lVar5) {
          if ((DAT_180c6fa38 == 0) && (DAT_180c6fa40 <= UVar6)) goto LAB_180376e2e;
        }
        else {
          DAT_180901760 = 1000;
LAB_180376e2e:
          lVar4 = -1;
          do {
            local_40 = lVar4 + 1;
            lVar7 = lVar4 + 1;
            lVar4 = local_40;
          } while ("client.dll:83FAFF0F84????????4154"[lVar7] != '\0');
          local_48 = "client.dll:83FAFF0F84????????4154";
          local_38 = "patterns::particle_destroy_effect";
          local_30 = 0x21;
          DAT_180c6fa38 = FUN_1800e5d20(&local_38,&local_48);
          DAT_180901750 = lVar5;
          DAT_180c6fa40 = 0xffffffffffffffff;
          if (DAT_180c6fa38 == 0) {
            DAT_180c6fa40 = DAT_180901760 + UVar6;
            uVar8 = 60000;
            if (DAT_180901760 < 60000) {
              uVar8 = DAT_180901760 * 2;
            }
          }
          DAT_180901760 = uVar8;
        }
        lVar7 = DAT_180c6fa38;
        FUN_1805f68fc(&DAT_180901770);
      }
    }
    iVar3 = DAT_180902c30;
    if (puVar9 == (undefined *)0x0) {
      return;
    }
    if (lVar7 == 0) {
      return;
    }
    cVar2 = FUN_1804513c0(lVar7,1,2);
    if (cVar2 != '\0') {
      lVar5 = FUN_18017ea70();
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      cVar2 = FUN_1802449f0(lVar7,puVar9,iVar3);
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
      if (cVar2 != '\0') goto LAB_180376f1a;
    }
    FUN_180374e20("destroy_effect");
  }
  else {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    bVar1 = false;
    if (lVar5 != 0) {
      local_58[0] = (undefined *)0x0;
      cVar2 = FUN_1804514f0(local_58,lVar5,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar9 = local_58[0];
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (!bVar1) {
      puVar9 = (undefined *)0x0;
    }
    if (((puVar9 == (undefined *)0x0) || (DAT_180902c38 == (undefined *)0x0)) ||
       (puVar9 == DAT_180902c38)) goto LAB_180376d64;
LAB_180376f1a:
    DAT_180902c30 = -1;
    DAT_180902c38 = (undefined *)0x0;
    DAT_180902c40 = 0xffffffff;
    _DAT_180902c48 = 0;
  }
  return;
}



