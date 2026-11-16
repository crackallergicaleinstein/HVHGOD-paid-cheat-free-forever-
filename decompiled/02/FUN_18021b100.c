// FUN_18021b100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021b100 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18021b100(longlong param_1,int param_2,uint param_3,longlong param_4)

{
  char *pcVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 auStack_1f8 [48];
  char local_1c8;
  char local_1c7;
  uint local_1c4;
  longlong local_1c0;
  undefined *local_1b8;
  undefined2 local_1a8 [4];
  undefined1 local_1a0 [24];
  undefined1 local_188 [216];
  int local_b0;
  uint local_ac;
  longlong local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_1b8 = &DAT_180cc9e50;
  local_1c4 = param_3;
  local_1c0 = param_4;
  iVar10 = FUN_1805f68d0(&DAT_180cc9e50);
  uVar8 = DAT_180cca108;
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  plVar7 = DAT_180cca000;
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  for (; (plVar7 != DAT_180cca008 && (*plVar7 != param_4)); plVar7 = plVar7 + 0x25) {
  }
  if ((param_1 != DAT_180cca0d0) || (plVar7 == DAT_180cca008)) {
    FUN_1805f68fc(&DAT_180cc9e50);
    if (DAT_180cca888 != 0) {
      (*(code *)DAT_180cca888)(param_1,param_2,param_3,param_4);
    }
    goto LAB_18021b5d1;
  }
  if ((((DAT_180cca116 == '\0') && ((char)plVar7[0x22] != '\0')) &&
      (*(char *)((longlong)plVar7 + 0x111) == '\0')) &&
     (((param_2 - 2U < 2 && (param_3 < 0x3a)) &&
      ((ulonglong)((DAT_180cc9ea8 - DAT_180cc9ea0) / 0x110) < 0x80)))) {
    uVar2 = *(ushort *)(plVar7 + 2);
    plVar11 = (longlong *)
              ((((ulonglong)(uVar2 >> 8) ^
                ((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 &
               DAT_180cc9cb8) * 0x10 + DAT_180cc9ca0);
    lVar12 = plVar11[1];
    if (lVar12 == DAT_180cc9c90) {
LAB_18021b299:
      lVar12 = 0;
    }
    else {
      uVar3 = *(ushort *)(lVar12 + 0x10);
      while (uVar2 != uVar3) {
        if (lVar12 == *plVar11) goto LAB_18021b299;
        lVar12 = *(longlong *)(lVar12 + 8);
        uVar3 = *(ushort *)(lVar12 + 0x10);
      }
    }
    lVar15 = DAT_180cc9c90;
    if (lVar12 != 0) {
      lVar15 = lVar12;
    }
    if (((lVar15 != DAT_180cc9c90) &&
        (lVar12 = *(longlong *)(lVar15 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar12 != 0)) &&
       ((pcVar1 = (char *)(lVar12 + 0xb0), *pcVar1 != '\x03' || (*(char *)(lVar12 + 0xb2) != '\0')))
       ) {
      uVar4 = *(uint *)(lVar12 + 0xac);
      if (((byte)uVar4 & 0xc) != 0xc) {
        if ((uVar4 & 4) == 0) {
          if ((uVar4 & 8) == 0) goto LAB_18021b30c;
          iVar10 = 3;
        }
        else {
          iVar10 = 2;
        }
        if (iVar10 != param_2) goto LAB_18021b59a;
      }
LAB_18021b30c:
      uVar5 = *(undefined4 *)(lVar12 + 0xa8);
      cVar9 = FUN_1804513c0(DAT_180cca108,1,2);
      if (cVar9 == '\0') {
        local_1c7 = '\0';
      }
      else {
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        FUN_18022fe90(&local_1c8,uVar8,uVar5,param_3);
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
      }
      if (local_1c7 == '\0') {
        local_1c8 = '\0';
      }
      if (local_1c8 != '\0') {
        if (*pcVar1 == '\x03') {
          local_88 = 0;
          local_80 = 0xf;
          local_98._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar6[0xf] = 0;
          auVar6._0_15_ = local_98._1_15_;
          local_98 = auVar6 << 8;
          FUN_1800ce320(&DAT_180cc8140,param_2,local_98);
          if (param_2 == 2) {
            DAT_180cc8152 = (short)plVar7[2];
          }
          else {
            DAT_180cc8150 = (short)plVar7[2];
          }
        }
        else {
          if ((byte)(*pcVar1 - 1U) < 2) {
            lVar12 = FUN_180218c10(&DAT_180cc8068,local_98,param_2);
            plVar11 = *(longlong **)(lVar12 + 8);
            plVar17 = (longlong *)*plVar11;
            if (plVar17 != plVar11) {
              lVar12 = DAT_180cc9c90;
              do {
                uVar2 = *(ushort *)(plVar17 + 2);
                uVar16 = (ulonglong)uVar2;
                plVar13 = (longlong *)
                          ((((uVar16 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                            (ulonglong)(uVar2 >> 8)) * 0x100000001b3 & DAT_180cc9cb8) * 0x10 +
                          DAT_180cc9ca0);
                lVar15 = plVar13[1];
                if (lVar15 == lVar12) {
LAB_18021b489:
                  lVar15 = 0;
                }
                else if (uVar2 != *(ushort *)(lVar15 + 0x10)) {
                  do {
                    if (lVar15 == *plVar13) {
                      uVar16 = (ulonglong)*(ushort *)(plVar17 + 2);
                      goto LAB_18021b489;
                    }
                    lVar15 = *(longlong *)(lVar15 + 8);
                  } while (uVar2 != *(ushort *)(lVar15 + 0x10));
                  uVar16 = (ulonglong)*(ushort *)(plVar17 + 2);
                }
                lVar14 = lVar12;
                if (lVar15 != 0) {
                  lVar14 = lVar15;
                }
                if (lVar14 == lVar12) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = *(longlong *)(lVar14 + 0x18) * 0xb8 + DAT_180cc9bf8;
                }
                if ((((short)uVar16 != (short)plVar7[2]) && (lVar15 != 0)) &&
                   (*(char *)(lVar15 + 0xb0) == *pcVar1)) {
                  FUN_1801d6820(&DAT_180cc8068,uVar16,param_2);
                  lVar12 = DAT_180cc9c90;
                }
                plVar17 = (longlong *)*plVar17;
              } while (plVar17 != plVar11);
              param_4 = local_1c0;
              param_3 = local_1c4;
            }
            FUN_1800cf8e0(local_98);
          }
          FUN_1801d6680(&DAT_180cc8068,(short)plVar7[2],plVar7 + 3,param_2);
        }
        local_1a8[0] = (undefined2)plVar7[2];
        FUN_18019f170(local_1a0,plVar7 + 3);
        local_a0 = 0;
        local_9e = 0;
        local_b0 = param_2;
        local_ac = param_3;
        local_a8 = param_4;
        if (DAT_180cc9ea8 == DAT_180cc9eb0) {
          FUN_1802318f0(&DAT_180cc9ea0,DAT_180cc9ea8,local_1a8);
        }
        else {
          FUN_1802329a0(DAT_180cc9ea8,local_1a8);
          DAT_180cc9ea8 = DAT_180cc9ea8 + 0x110;
        }
        FUN_18015c010(local_188);
      }
    }
  }
LAB_18021b59a:
  FUN_1805f68fc(&DAT_180cc9e50);
LAB_18021b5d1:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



