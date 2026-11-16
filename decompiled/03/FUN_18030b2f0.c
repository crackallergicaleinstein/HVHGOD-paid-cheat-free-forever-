// FUN_18030b2f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030b2f0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18030b2f0(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  ulonglong *puVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStackY_1098 [32];
  char *local_1058;
  undefined8 local_1050;
  undefined8 local_1048;
  ulonglong local_1040;
  undefined1 local_48 [16];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStackY_1098;
  lVar10 = (longlong)*(int *)(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0x10)) {
    local_48 = (undefined1  [16])0x0;
    local_38 = (ulonglong *)0x0;
    FUN_180334790(local_48,lVar10);
    puVar13 = (ulonglong *)local_48._8_8_;
    if (0 < lVar10) {
      lVar14 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar14 * 8);
        puVar11 = (ulonglong *)0x0;
        if (lVar3 != 0) {
          puVar11 = (ulonglong *)(lVar3 + 0x10);
        }
        if (puVar11 != (ulonglong *)0x0) {
          if (puVar13 == local_38) {
            FUN_180338630(local_48,puVar13);
            puVar13 = (ulonglong *)local_48._8_8_;
          }
          else {
            uVar4 = puVar11[1];
            uVar9 = puVar11[2];
            uVar5 = puVar11[3];
            *puVar13 = *puVar11;
            puVar13[1] = uVar4;
            puVar13[2] = uVar9;
            puVar13[3] = uVar5;
            puVar13[4] = puVar11[4];
            puVar13 = (ulonglong *)(local_48._8_8_ + 0x28);
            local_48._8_8_ = puVar13;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < lVar10);
    }
    uVar6 = local_48._0_8_;
    if ((ulonglong *)local_48._0_8_ != puVar13) {
      puVar11 = (ulonglong *)(local_48._0_8_ + 8);
      do {
        uVar4 = *puVar11;
        *puVar11 = uVar4 & 0xfffffffffffff9e7;
        puVar11[2] = 0;
        puVar11[3] = 0;
        uVar9 = puVar11[-1];
        *(uint *)(puVar11 + -1) = (uint)uVar9 | 0x79;
        if ((uVar4 & 0xfffffffffffff9e7) == 0) {
          *(uint *)(puVar11 + -1) = (uint)uVar9 | 0x7d;
          *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
        }
        puVar1 = puVar11 + 4;
        puVar11 = puVar11 + 5;
      } while (puVar1 != puVar13);
      puVar13 = (ulonglong *)local_48._8_8_;
    }
    lVar10 = ((longlong)puVar13 - local_48._0_8_) / 0x28;
    if (lVar10 < 0x21) {
      FUN_180334850(local_48._0_8_,puVar13);
    }
    else {
      FUN_180334a50(&local_1048,lVar10 - lVar10 / 2);
      FUN_180334b40(uVar6,puVar13,lVar10);
      if (0x66 < local_1040) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_1058 = "tier0.dll:g_pMemAlloc";
          local_1050 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1058);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1048);
      }
    }
    iVar15 = 0;
    if (0 < (int)((longlong)(local_48._8_8_ - local_48._0_8_) / 0x28)) {
      lVar10 = 0;
      lVar14 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar14);
        puVar12 = (undefined8 *)0x0;
        if (lVar3 != 0) {
          puVar12 = (undefined8 *)(lVar3 + 0x10);
        }
        if (puVar12 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)(local_48._0_8_ + lVar10);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          *puVar12 = *puVar2;
          puVar12[1] = uVar6;
          puVar12[2] = uVar7;
          puVar12[3] = uVar8;
          puVar12[4] = *(undefined8 *)(local_48._0_8_ + 0x20 + lVar10);
        }
        iVar15 = iVar15 + 1;
        lVar14 = lVar14 + 8;
        lVar10 = lVar10 + 0x28;
      } while (iVar15 < (int)((longlong)(local_48._8_8_ - local_48._0_8_) / 0x28));
    }
    if (local_48._0_8_ != 0) {
      lVar10 = local_48._0_8_;
      if (0xfff < (ulonglong)((((longlong)local_38 - local_48._0_8_) / 0x28) * 0x28)) {
        lVar10 = *(longlong *)(local_48._0_8_ + -8);
        if (0x1f < (local_48._0_8_ - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      FUN_1804547d0(lVar10);
    }
  }
}



