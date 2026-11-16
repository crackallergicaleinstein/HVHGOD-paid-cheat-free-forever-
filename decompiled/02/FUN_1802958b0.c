// FUN_1802958b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802958b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802958b0(undefined8 param_1,longlong param_2,code *param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,byte *param_7,byte param_8,byte param_9,
                  undefined1 param_10,undefined2 param_11)

{
  byte bVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined **ppuVar13;
  ULONGLONG UVar14;
  byte *pbVar15;
  ulonglong uVar16;
  undefined **ppuVar17;
  char *pcVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined1 auStack_778 [32];
  undefined **local_758;
  char *local_750;
  byte *local_748;
  int local_740;
  longlong local_738;
  int local_730;
  byte *local_728;
  uint local_720;
  uint local_718;
  uint local_710;
  uint local_708;
  int local_6f8;
  byte *local_6f0;
  byte local_6e8;
  byte local_6e7;
  int local_6e4;
  int local_6e0;
  int local_6dc;
  uint local_6d8 [2];
  byte *local_6d0;
  ulonglong local_6c8;
  byte *local_6c0;
  undefined8 uStack_6b8;
  byte *local_6b0;
  undefined1 local_6a8 [32];
  longlong local_688;
  int local_680;
  int local_67c;
  int local_678;
  longlong local_670;
  int local_668;
  char local_660;
  char local_658 [1536];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_778;
  bVar23 = false;
  local_6c8 = param_5;
  local_6e7 = param_9;
  local_6f0 = (byte *)((ulonglong)local_6f0 & 0xffffffff00000000);
  local_750 = (char *)CONCAT62(local_750._2_6_,param_11);
  local_6b0 = param_7;
  local_6e8 = param_8;
  local_758 = (undefined **)CONCAT71(local_758._1_7_,param_10);
  puVar8 = (undefined8 *)FUN_18028c850(&local_6c0,param_8,param_9,*(undefined4 *)param_7);
  cVar6 = DAT_180c654a9;
  local_6d0 = (byte *)*puVar8;
  uStack_6b8 = puVar8[1];
  local_6d8[0] = (uint)uStack_6b8;
  if (local_6d0 == (byte *)0x0) {
  }
  if (param_7[3] == 0) {
  }
  local_6c0 = local_6d0;
  if ((param_3 == (code *)0x0) || (param_2 == 0)) {
    LOCK();
    DAT_180c654a9 = '\x01';
    UNLOCK();
    if (cVar6 != '\0') {
      DAT_180c654a9 = '\x01';
    }
    FUN_18063ab10(local_658,0,0x600);
    local_758 = (undefined **)param_3;
    local_750 = (char *)param_2;
    FUN_18015ad60(local_658,0x600,0xffffffffffffffff,"original=0x%llx primitive_buffer=0x%llx");
  }
  else {
    FUN_18027c3e0(&local_688,param_2);
    cVar6 = local_660;
    if ((((((((local_660 == '\0') || (local_67c < 0)) || (local_678 < 0)) ||
           ((local_680 < 0 || (local_668 < 0)))) || (local_680 < local_67c)) ||
         ((local_668 < local_678 || ((local_67c != 0 && (local_688 == 0)))))) ||
        ((local_678 != 0 && (local_670 == 0)))) || (0x100000 - local_678 < local_67c)) {
      local_6e4 = -1;
    }
    else {
      local_6e4 = local_678 + local_67c;
    }
    (*param_3)(param_4,local_6c8,param_6,param_2);
    FUN_18027c3e0(&local_688,param_2);
    iVar22 = local_6e4;
    cVar4 = DAT_180c654a8;
    if ((((((local_660 == '\0') || (local_67c < 0)) || (local_678 < 0)) ||
         (((local_680 < 0 || (local_668 < 0)) ||
          ((local_680 < local_67c || (local_668 < local_678)))))) ||
        (((local_67c != 0 && (local_688 == 0)) || ((local_678 != 0 && (local_670 == 0)))))) ||
       (iVar7 = local_678 + local_67c, 0x100000 - local_678 < local_67c)) {
      iVar7 = -1;
    }
    local_6e0 = iVar7;
    if (((local_660 != '\0') && (-1 < local_6e4)) && (local_6e4 < iVar7)) {
      uVar24 = 0x3f800000;
      local_6f8 = 0;
      local_6dc = 0;
      pbVar20 = local_6b0;
      do {
        lVar9 = FUN_18027c350(&local_688,iVar22);
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        bVar3 = false;
        if (lVar9 + 0x20 != 0) {
          local_6f0 = (byte *)0x0;
          cVar6 = FUN_1804514f0(&local_6f0,lVar9 + 0x20,8);
          if (cVar6 == '\0') {
            bVar3 = false;
          }
          else {
            bVar3 = true;
            pbVar20 = local_6f0;
          }
        }
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        if ((!bVar3) || (pbVar20 == (byte *)0x0)) {
LAB_180295c02:
          bVar3 = false;
        }
        else {
          lVar10 = FUN_18017ea70();
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
          if (pbVar20 + 0x10 == (byte *)0x0) {
            bVar3 = false;
          }
          else {
            local_6f0 = (byte *)0x0;
            cVar6 = FUN_1804514f0(&local_6f0,pbVar20 + 0x10,8);
            if (cVar6 == '\0') {
              bVar3 = false;
            }
            else {
              bVar3 = true;
              local_6c0 = local_6f0;
            }
          }
          pbVar5 = local_6c0;
          lVar10 = FUN_18017ea70();
          if (*(int *)(lVar10 + 4) != 0) {
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
          }
          pbVar15 = (byte *)0x0;
          if (bVar3) {
            pbVar15 = pbVar5;
          }
          if (pbVar15 == (byte *)0x0) goto LAB_180295c02;
          puVar11 = (undefined8 *)FUN_180454030(local_6a8,pbVar15,0x100);
          bVar23 = true;
          puVar8 = puVar11;
          if (0xf < (ulonglong)puVar11[3]) {
            puVar8 = (undefined8 *)*puVar11;
          }
          lVar10 = puVar11[2];
          local_758 = (undefined **)0x2;
          lVar12 = FUN_1801c56a0(puVar8,lVar10);
          if (lVar12 != -1) {
            lVar10 = lVar10 - (lVar12 + 1);
            puVar8 = (undefined8 *)((longlong)puVar8 + lVar12 + 1);
          }
          if (((lVar10 != 0x1c) ||
              (iVar7 = memcmp(puVar8,"solidcolor_glowproperty.vmat",0x1c), iVar7 != 0)) &&
             ((lVar10 != 0x1e ||
              (iVar7 = memcmp(puVar8,"solidcolor_glowproperty.vmat_c",0x1e), iVar7 != 0))))
          goto LAB_180295c02;
          bVar3 = true;
        }
        if (bVar23) {
          bVar23 = false;
          FUN_18015c010(local_6a8);
        }
        if (!bVar3) {
          local_6dc = local_6dc + 1;
          cVar6 = FUN_18027c510(lVar9,local_6d0,local_6d8);
          if (cVar6 != '\0') {
            local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,uVar24);
            if (lVar9 + 0x54 != 0) {
              lVar10 = FUN_18017ea70();
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
              cVar6 = FUN_1801ad800(lVar9 + 0x54,&local_6f0);
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              if (cVar6 != '\0') {
                local_6f8 = local_6f8 + 1;
              }
            }
          }
        }
        iVar7 = local_6e0;
        cVar6 = DAT_180c65458;
        iVar22 = iVar22 + 1;
        if (local_6e0 <= iVar22) {
          ppuVar17 = &PTR_180700558;
          LOCK();
          DAT_180c65458 = '\x01';
          UNLOCK();
          if (cVar6 == '\0') {
            FUN_18063ab10(local_658,0,0x600);
            iVar22 = local_6f8;
            local_748 = local_6d0;
            local_750 = (char *)CONCAT44(local_750._4_4_,local_6f8);
            local_758 = (undefined **)CONCAT44(local_758._4_4_,iVar7 - local_6e4);
            FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                          "generated=%d replaced=%d material=0x%llx");
            local_750 = local_658;
            ppuVar13 = &PTR_180700558;
            if (local_658[0] != '\0') {
              ppuVar13 = (undefined **)&DAT_1806bcfc0;
            }
            pcVar18 = "PRIMITIVE_WRITE_FAILED";
            if (0 < iVar22) {
              pcVar18 = "PRIMITIVES_REPLACED";
            }
            local_758 = ppuVar13;
            FUN_1800f6900((iVar22 < 1) + '\x01',local_750,"Chams",pcVar18);
          }
          if (param_11._1_1_ == '\0') {
          }
          local_6f0 = (byte *)0x908060504030200;
          bVar1 = local_6e8;
          if (10 < local_6e8) {
            if (0x12 < local_6e8) {
            }
            bVar1 = *(byte *)((longlong)local_6d8 + ((ulonglong)(local_6e8 - 0xb) - 0x18));
          }
          if (bVar1 != 6) {
          }
          if (local_6c8 < 0x10001) {
          }
          lVar9 = local_6c8 + 0xc0;
          lVar10 = FUN_18017ea70();
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
          if (lVar9 == 0) {
            bVar23 = false;
            uVar21 = (uint)local_6f0;
          }
          else {
            local_6d8[0] = 0;
            cVar6 = FUN_1804514f0(local_6d8,lVar9,4);
            if (cVar6 == '\0') {
              bVar23 = false;
              uVar21 = (uint)local_6f0;
            }
            else {
              bVar23 = true;
              uVar21 = local_6d8[0];
            }
          }
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          uVar19 = 0;
          if (bVar23) {
            uVar19 = uVar21;
          }
          iVar22 = 0;
          if (0x3fff < (uVar19 & 0x7fff)) {
            iVar22 = 2;
          }
          uVar21 = (uint)local_6e7;
          uVar16 = (ulonglong)((uint)(byte)param_11 + (iVar22 + uVar21) * 2);
          UVar14 = GetTickCount64();
          uVar2 = *(ulonglong *)(&DAT_180c65460 + uVar16 * 8);
          if (UVar14 < uVar2) {
          }
          LOCK();
          bVar23 = uVar2 == *(ulonglong *)(&DAT_180c65460 + uVar16 * 8);
          if (bVar23) {
            *(ULONGLONG *)(&DAT_180c65460 + uVar16 * 8) = UVar14 + 5000;
          }
          UNLOCK();
          if (bVar23) {
            FUN_18063ab10(local_658,0,0x600);
            local_748 = (byte *)0x1807d1048;
            local_750 = "visible";
            local_730 = (local_6e0 - local_6dc) - local_6e4;
            local_708 = (uint)local_6b0[3];
            if ((byte)param_11 != 0) {
              local_748 = (byte *)0x1806bd198;
            }
            local_710 = (uint)local_6b0[2];
            local_718 = (uint)local_6b0[1];
            local_720 = (uint)*local_6b0;
            if (uVar21 != 0) {
              local_750 = "hidden";
            }
            local_728 = local_6d0;
            local_758 = (undefined **)0x1807d10d8;
            local_738 = CONCAT44(local_738._4_4_,local_6f8);
            local_740 = local_6dc;
            if (0x3fff < (uVar19 & 0x7fff)) {
              local_758 = (undefined **)0x1807d10d0;
            }
            FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                          "domain=%s depth=%s component=%s surfaces=%d replaced=%d masks=%d material=0x%llx rgba=%u,%u,%u,%u"
                         );
            local_750 = local_658;
            if (local_658[0] != '\0') {
              ppuVar17 = (undefined **)&DAT_1806bcfc0;
            }
            local_758 = ppuVar17;
            FUN_1800f6900(0);
          }
        }
      } while( true );
    }
    LOCK();
    DAT_180c654a8 = '\x01';
    UNLOCK();
    if (cVar4 != '\0') {
      DAT_180c654a8 = '\x01';
    }
    FUN_18063ab10(local_658,0,0x600);
    local_758 = (undefined **)0x1806ff000;
    local_748 = (byte *)CONCAT44(local_748._4_4_,iVar22);
    local_750 = "false";
    if (local_660 != '\0') {
      local_750 = "true";
    }
    if (cVar6 != '\0') {
      local_758 = (undefined **)0x1806ff008;
    }
    local_740 = iVar7;
    local_738 = param_2;
    FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                  "before_valid=%s after_valid=%s previous=%d current=%d buffer=0x%llx");
  }
  local_750 = local_658;
  ppuVar17 = &PTR_180700558;
  if (local_658[0] != '\0') {
    ppuVar17 = (undefined **)&DAT_1806bcfc0;
  }
  local_758 = ppuVar17;
  FUN_1800f6900(2);
}



