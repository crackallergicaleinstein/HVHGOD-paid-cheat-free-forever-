// FUN_18045efc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045efc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18045efc0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [4];
  ulonglong local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if ((DAT_180c62c58 != 0) && (uVar12 = *(ulonglong *)(param_1 + 8), uVar12 != 0)) {
    if ((DAT_180c62c70 == 0) || ((uVar12 < DAT_180c62c70 || (DAT_180c62c70 + 0x69d8 <= uVar12)))) {
      if (DAT_180c62c68 == 0) {
      }
      if (DAT_180c62c50 == 0) {
      }
      if (uVar12 < DAT_180c62c68) {
      }
      if (DAT_180c62c50 + DAT_180c62c68 <= uVar12) {
      }
      uVar12 = uVar12 - DAT_180c62c68 | 0x8000000000000000;
    }
    else {
      uVar12 = uVar12 - DAT_180c62c70;
    }
    if ((*(byte *)(DAT_180bb8ae8 + 0x1e80) & 0x40) == 0) {
      plVar1 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      pcVar5 = "##bind_menu";
      uVar9 = ~*(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4);
      cVar4 = '#';
      uVar11 = uVar9;
      do {
        pcVar5 = pcVar5 + 1;
        if (((cVar4 == '#') && (*pcVar5 == '#')) && (pcVar5[1] == '#')) {
          pcVar5 = pcVar5 + 2;
          uVar11 = uVar9;
        }
        else {
          uVar11 = crc32(uVar11,cVar4);
        }
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
      uVar9 = ~uVar11;
      if (*(uint *)(*plVar1 + 0x1534) == uVar9) {
        FUN_1804cf810(uVar9,0xb,"##bind_menu");
      }
      lVar14 = DAT_180bb8ae8;
      cVar4 = FUN_1804c3590(1);
      if (((cVar4 != '\0') && (lVar13 = *(longlong *)(lVar14 + 0x14d8), lVar13 != 0)) &&
         (lVar13 == *(longlong *)(lVar14 + 0x14d0))) {
        cVar8 = '\0';
        cVar4 = FUN_1804b7ab0(lVar13);
        if ((cVar4 != '\0') &&
           ((((*(int *)(lVar14 + 0x1550) == 0 || (*(char *)(lVar14 + 0x155f) != cVar8)) ||
             (*(int *)(lVar14 + 0x1550) == *(int *)(lVar13 + 0x8c))) &&
            (cVar4 = FUN_1804c3600(param_2,param_3,1), cVar4 != '\0')))) {
          local_58 = *param_2;
          local_50 = *param_3;
          if ((float)local_58 <= *(float *)(lVar14 + 0xaf8)) {
            local_58._4_4_ = (float)((ulonglong)local_58 >> 0x20);
            bVar3 = local_58._4_4_ <= *(float *)(lVar14 + 0xafc);
            if (((bVar3) && (bVar3 = *(float *)(lVar14 + 0xaf8) < (float)local_50, bVar3)) &&
               (local_50._4_4_ = (float)((ulonglong)local_50 >> 0x20),
               bVar3 = *(float *)(lVar14 + 0xafc) < local_50._4_4_, bVar3)) {
              puVar7 = local_48;
              uVar2 = *(undefined8 *)(*(longlong *)(lVar14 + 0x14d0) + 0x1c0);
              local_28 = unaff_XMM6_Qa;
              uStack_20 = unaff_XMM6_Qb;
              fVar15 = *(float *)(lVar14 + 0x114);
              local_48[0] = 0;
              uVar10 = uVar11;
              do {
                uVar10 = crc32(uVar10,*puVar7);
                puVar6 = puVar7 + 2;
                puVar7 = puVar7 + 1;
              } while (puVar6 <= local_48 + 1);
              if (puVar7 < local_48 + 1) {
                do {
                  uVar10 = crc32(uVar10,*(undefined1 *)puVar7);
                  puVar7 = (undefined4 *)((longlong)puVar7 + 1);
                } while (puVar7 < local_48 + 1);
              }
              FUN_1804b1700(uVar2,~uVar10,DAT_180b0a41c * 2.0 + *(float *)(lVar14 + 0x110));
              local_48[2] = 1;
              puVar7 = local_48 + 2;
              do {
                uVar11 = crc32(uVar11,*puVar7);
                puVar6 = puVar7 + 2;
                puVar7 = puVar7 + 1;
              } while (puVar6 <= local_48 + 3);
              if (puVar7 < local_48 + 3) {
                do {
                  uVar11 = crc32(uVar11,*(undefined1 *)puVar7);
                  puVar7 = (undefined4 *)((longlong)puVar7 + 1);
                } while (puVar7 < local_48 + 3);
              }
              FUN_1804b1700(uVar2,~uVar11,fVar15 - DAT_180b0a41c * 15.4);
              DAT_1808e4e34 = 0xffffffff;
              DAT_180bbecd9 = 0;
              FUN_1804c7740(uVar9,0);
              lVar14 = DAT_180bb8ae8;
            }
          }
        }
      }
      if ((*(int *)(lVar14 + 0x2008) < *(int *)(lVar14 + 0x1ff8)) &&
         (*(uint *)((longlong)*(int *)(lVar14 + 0x2008) * 0x38 + *(longlong *)(lVar14 + 0x2000)) ==
          uVar9)) {
        FUN_18045de90(uVar9,param_1,uVar12);
      }
    }
  }
}



