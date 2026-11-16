// FUN_180284e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180284e30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180284e30(undefined8 param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ULONGLONG UVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined8 local_98;
  undefined1 local_88 [16];
  char *local_78;
  longlong local_70;
  
  auVar17 = ZEXT464((uint)local_98);
  UVar9 = GetTickCount64();
  auVar3 = vpcmpeqd_avx(ZEXT416(param_2),SUB6416(ZEXT464(0),0));
  auVar4._12_4_ = 0;
  auVar4._0_12_ = ZEXT812(0);
  auVar18 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar3 = vblendvps_avx(auVar4 << 0x20,SUB6416(ZEXT464(0x40400000),0),auVar3);
  if (param_2 == 2) {
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar11 = DAT_1808f2bf8;
    lVar12 = DAT_1808da460;
    if ((DAT_1808f2bf8 != DAT_1808da460) || (lVar14 = DAT_180c653e0, DAT_180c653e0 == 0)) {
      UVar10 = GetTickCount64();
      if ((lVar11 == lVar12) && (UVar10 < DAT_180c653e8)) {
        lVar14 = 0;
      }
      else {
        local_98 = &DAT_1808f2c00;
        iVar8 = FUN_1805f68d0(&DAT_1808f2c00);
        if (iVar8 != 0) goto LAB_1802851e8;
        if (DAT_1808f2c4c == 0x7fffffff) {
          DAT_1808f2c4c = 0x7ffffffe;
          goto LAB_1802851dd;
        }
        uVar15 = 1000;
        if (DAT_1808f2bf8 == lVar12) {
          if ((DAT_180c653e0 == 0) && (DAT_180c653e8 <= UVar10)) goto LAB_180284f80;
        }
        else {
          DAT_1808f2bf0 = 1000;
LAB_180284f80:
          lVar11 = -1;
          do {
            local_70 = lVar11 + 1;
            lVar14 = lVar11 + 1;
            lVar11 = local_70;
          } while ("client.dll:>E8????????3D00800000"[lVar14] != '\0');
          local_78 = "client.dll:>E8????????3D00800000";
          local_88._8_8_ = 0x1c;
          local_88._0_8_ = "patterns::game_event_get_int";
          DAT_180c653e0 = FUN_1800e5d20(local_88,&local_78);
          DAT_1808f2bf8 = lVar12;
          DAT_180c653e8 = 0xffffffffffffffff;
          if (DAT_180c653e0 == 0) {
            DAT_180c653e8 = DAT_1808f2bf0 + UVar10;
            uVar15 = 60000;
            if (DAT_1808f2bf0 < 60000) {
              uVar15 = DAT_1808f2bf0 * 2;
            }
          }
          DAT_1808f2bf0 = uVar15;
        }
        lVar14 = DAT_180c653e0;
        FUN_1805f68fc(&DAT_1808f2c00);
      }
    }
    cVar5 = FUN_1804513c0(lVar14,1,2);
    if (cVar5 == '\0') {
LAB_180285070:
      uVar7 = 0;
    }
    else {
      lVar12 = FUN_18017ea70();
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
      FUN_1802875b0(&local_98,lVar14,param_3,"haskit",0);
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      uVar7 = (uint)local_98;
      if (local_98._4_1_ == '\0') goto LAB_180285070;
    }
    auVar3 = vpcmpeqd_avx(ZEXT416(uVar7),SUB6416(ZEXT464(0),0));
    auVar3 = vblendvps_avx(SUB6416(ZEXT464(0x40a00000),0),SUB6416(ZEXT464(0x41200000),0),auVar3);
  }
  auVar16 = ZEXT1664(auVar3);
  iVar8 = FUN_1805f68d0(&DAT_180b8f8c0);
  if (iVar8 == 0) {
    if (DAT_180b8f90c != 0x7fffffff) {
      local_98._4_4_ = (uint)(UVar9 >> 0x20);
      auVar3 = vinsertps_avx(ZEXT416((uint)UVar9),ZEXT416(local_98._4_4_),0x10);
      auVar3 = vinsertps_avx(auVar3,auVar16._0_16_,0x20);
      auVar3 = vinsertps_avx(auVar3,auVar17._0_16_,0x30);
      local_98 = (undefined *)UVar9;
      if (param_2 < 2) {
        _DAT_180b8f910 = auVar3;
        if (auVar16._0_4_ == auVar18._0_4_) {
          plVar13 = (longlong *)FUN_180113860(&DAT_180b8f8b8);
          lVar12 = DAT_180b8f8b0;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          LOCK();
          UNLOCK();
          bVar6 = (byte)DAT_180b8f8b8;
          DAT_180b8f8b8 = (longlong)plVar13;
          if ((bVar6 & 3) == 2) {
            FUN_1805fa36c(&DAT_180b8f8b8);
          }
          if ((lVar12 != 0) && (*(char *)(lVar12 + 0x36) != '\0')) {
            local_88 = (undefined1  [16])0x0;
            FUN_180287540(0,local_88);
          }
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar13 + 1;
            lVar12 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13);
              }
            }
          }
        }
      }
      else {
        _DAT_180b8f920 = auVar3;
      }
      FUN_1805f68fc(&DAT_180b8f8c0);
      return;
    }
    DAT_180b8f90c = 0x7ffffffe;
LAB_1802851dd:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
LAB_1802851e8:
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(5);
}



