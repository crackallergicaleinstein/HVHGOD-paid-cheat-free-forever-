// FUN_180164e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180164e20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180164e20(longlong *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  char cVar9;
  char *pcVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStackY_138 [32];
  ulonglong local_100;
  char *local_f8;
  ulonglong uStack_f0;
  char *local_e8;
  ulonglong uStack_e0;
  longlong *local_d8;
  char *local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [8];
  char local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_138;
  uVar15 = param_1[1];
  if (((uVar15 != 0) && (uVar15 < 0x8000001)) && (*(char *)((uVar15 - 1) + *param_1) == '\n')) {
    bVar3 = false;
    bVar5 = false;
    bVar6 = false;
    bVar4 = false;
    bVar7 = false;
    uStack_74 = 0;
    uStack_60 = 0;
    local_58 = ZEXT816(0);
    uStack_48 = 0;
    uStack_40 = 0;
    local_78 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    local_d8 = param_1;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_f8 = "tier0.dll:g_pMemAlloc";
      uStack_f0 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_f8);
    }
    lStack_70 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
    *(longlong *)lStack_70 = lStack_70;
    *(longlong *)(lStack_70 + 8) = lStack_70;
    uStack_60 = 0;
    local_58 = (undefined1  [16])0x0;
    uStack_48 = 7;
    uStack_40 = 8;
    local_78 = 0x3f800000;
    FUN_1801406e0(&uStack_60,0x10,lStack_70);
    local_100 = 0;
    do {
      uVar15 = param_1[1];
      pcVar12 = (char *)*param_1;
      if (((uVar15 == 0) ||
          (pcVar10 = (char *)thunk_FUN_1805f7e70(pcVar12,pcVar12 + uVar15),
          pcVar10 == pcVar12 + uVar15)) ||
         (uVar11 = (longlong)pcVar10 - (longlong)pcVar12, uVar11 == 0xffffffffffffffff)) break;
      uStack_f0 = uVar11;
      if (uVar15 < uVar11) {
        uStack_f0 = uVar15;
      }
      *param_1 = (longlong)(pcVar12 + uVar11 + 1);
      pcVar10 = (char *)(uVar15 - (uVar11 + 1));
      param_1[1] = (longlong)pcVar10;
      if ((uStack_f0 != 0) && (pcVar12[uStack_f0 - 1] == '\r')) {
        uStack_f0 = uStack_f0 - 1;
      }
      local_100 = local_100 + 1;
      local_f8 = pcVar12;
      local_e8 = pcVar10;
      if (0x1000 < local_100) break;
      local_98 = (undefined1  [16])0x0;
      local_88 = 0;
      local_c8 = pcVar12;
      local_c0 = uStack_f0;
      FUN_180164970(local_98,&local_c8);
      puVar14 = (undefined8 *)local_98._0_8_;
      if (bVar3) {
        plVar2 = *(longlong **)local_98._0_8_;
        if ((*(longlong *)(local_98._0_8_ + 8) == 8) && (*plVar2 == 0x797469746e656469)) {
          if (!bVar5) {
            local_e8 = local_f8;
            uStack_e0 = uStack_f0;
            cVar9 = FUN_180164bc0();
            if (cVar9 != '\0') {
              bVar5 = true;
              bVar6 = true;
              if ((undefined8 *)local_98._0_8_ != (undefined8 *)0x0) {
                puVar13 = (undefined8 *)local_98._0_8_;
                if ((local_88 - local_98._0_8_ & 0xfffffffffffffff0U) < 0x1000) goto LAB_1801650d2;
                if (0x1f < (ulonglong)(local_98._0_8_ + (-8 - *(longlong *)(local_98._0_8_ + -8))))
                goto LAB_18016553a;
                FUN_1804547d0();
              }
              goto LAB_1801654a7;
            }
LAB_1801654be:
            puVar14 = (undefined8 *)local_98._0_8_;
          }
        }
        else if ((*(longlong *)(local_98._0_8_ + 8) == 9) &&
                ((*plVar2 == 0x7069702d6b726f66 && ((char)plVar2[1] == 'e')))) {
          if (((!bVar4) && ((local_98._8_8_ - local_98._0_8_ & 0xfffffffffffffff0) == 0x20)) &&
             (*(ulonglong *)(local_98._0_8_ + 0x18) < 0x81)) {
            pcVar12 = *(char **)(local_98._0_8_ + 0x10);
            if (*(longlong *)(local_98._0_8_ + 0x18) - 1U < 0xb4) {
              pcVar1 = pcVar12 + *(longlong *)(local_98._0_8_ + 0x18);
              for (; pcVar12 != pcVar1; pcVar12 = pcVar12 + 1) {
                cVar9 = *pcVar12;
                if (cVar9 < 'a') {
                  if ((0x32 < (byte)(cVar9 - 0x2dU)) ||
                     ((0x43ffffff01ff9U >> ((ulonglong)(byte)(cVar9 - 0x2dU) & 0x3f) & 1) == 0))
                  goto LAB_1801654c2;
                }
                else if ('z' < cVar9) goto LAB_1801654c2;
              }
              bVar4 = true;
              goto LAB_18016509f;
            }
          }
        }
        else if ((*(longlong *)(local_98._0_8_ + 8) == 0xc) &&
                ((*plVar2 == 0x652d6769666e6f63 && ((int)plVar2[1] == 0x726f7272)))) {
          if (((!bVar7) && ((local_98._8_8_ - local_98._0_8_ & 0xfffffffffffffff0) == 0x20)) &&
             (*(ulonglong *)(local_98._0_8_ + 0x18) < 0x4001)) {
            local_e8 = *(char **)(local_98._0_8_ + 0x10);
            uStack_e0 = *(ulonglong *)(local_98._0_8_ + 0x18);
            cVar9 = FUN_180164a60(&local_e8,1);
            if (cVar9 != '\0') {
              bVar7 = true;
              goto LAB_18016509f;
            }
          }
        }
        else if ((*(longlong *)(local_98._0_8_ + 8) == 6) &&
                ((((int)*plVar2 == 0x666e6f63 && (*(short *)((longlong)plVar2 + 4) == 0x6769)) &&
                 (((longlong)(local_98._8_8_ - local_98._0_8_) >> 4) - 10U < 2)))) {
          pcVar12 = *(char **)(local_98._0_8_ + 0x10);
          if (*(longlong *)(local_98._0_8_ + 0x18) - 1U < 0xb4) {
            pcVar1 = pcVar12 + *(longlong *)(local_98._0_8_ + 0x18);
            for (; pcVar12 != pcVar1; pcVar12 = pcVar12 + 1) {
              cVar9 = *pcVar12;
              if (cVar9 < 'a') {
                if ((0x32 < (byte)(cVar9 - 0x2dU)) ||
                   ((0x43ffffff01ff9U >> ((ulonglong)(byte)(cVar9 - 0x2dU) & 0x3f) & 1) == 0))
                goto LAB_1801654c2;
              }
              else if ('z' < cVar9) goto LAB_1801654c2;
            }
            FUN_1801777e0(&local_78,local_b8);
            if ((local_b0 == '\0') || (0x800 < uStack_68)) goto LAB_1801654be;
            puVar14 = (undefined8 *)local_98._0_8_;
            if ((*(longlong *)(local_98._0_8_ + 0x38) == 1) &&
               ((((**(char **)(local_98._0_8_ + 0x30) == '0' ||
                  ((*(longlong *)(local_98._0_8_ + 0x38) == 1 &&
                   (**(char **)(local_98._0_8_ + 0x30) == '1')))) &&
                 (*(longlong *)(local_98._0_8_ + 0x48) == 1)) &&
                ((**(char **)(local_98._0_8_ + 0x40) == '0' ||
                 ((*(longlong *)(local_98._0_8_ + 0x48) == 1 &&
                  (**(char **)(local_98._0_8_ + 0x40) == '1')))))))) {
              uVar15 = 2;
              uVar8 = local_98._8_8_;
              uVar11 = (longlong)(local_98._8_8_ - local_98._0_8_) >> 4;
              if (2 < uVar11) {
                puVar13 = (undefined8 *)(local_98._0_8_ + 0x20);
                do {
                  local_a8 = *puVar13;
                  uStack_a0 = puVar13[1];
                  cVar9 = FUN_180164a60(&local_a8,uVar15 == 9);
                  if (cVar9 == '\0') goto LAB_1801654c2;
                  uVar15 = uVar15 + 1;
                  puVar13 = puVar13 + 2;
                } while (uVar15 < uVar11);
                pcVar10 = local_e8;
              }
              if (((((*(ulonglong *)((undefined8)puVar14 + 5) < 0x2001) &&
                    (*(ulonglong *)((undefined8)puVar14 + 0xb) < 0x401)) &&
                   (*(ulonglong *)((undefined8)puVar14 + 0xd) < 0x401)) &&
                  ((*(ulonglong *)((undefined8)puVar14 + 0xf) < 0x2001 &&
                   (*(ulonglong *)((undefined8)puVar14 + 0x11) < 0x8001)))) &&
                 (((uVar8 - (longlong)puVar14 & 0xfffffffffffffff0U) != 0xb0 ||
                  (*(ulonglong *)((undefined8)puVar14 + 0x15) < 0x401)))) {
                puVar13 = puVar14;
                if ((0xfff < (local_88 - (longlong)puVar14 & 0xfffffffffffffff0U)) &&
                   (puVar13 = *(undefined8 **)((undefined8)puVar14 + -1),
                   0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar13))))
                goto LAB_18016553a;
                FUN_1804547d0(puVar13);
                param_1 = local_d8;
                bVar5 = bVar6;
                goto LAB_1801654a7;
              }
            }
          }
        }
LAB_1801654c2:
        if (puVar14 != (undefined8 *)0x0) {
          puVar13 = puVar14;
          if ((0xfff < (local_88 - (longlong)puVar14 & 0xfffffffffffffff0U)) &&
             (puVar13 = (undefined8 *)puVar14[-1],
             0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar13)))) {
LAB_18016553a:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          FUN_1804547d0(puVar13);
        }
        break;
      }
      if ((((local_98._8_8_ - local_98._0_8_ & 0xfffffffffffffff0) != 0x20) ||
          (*(longlong *)(local_98._0_8_ + 8) != 2)) || (**(short **)local_98._0_8_ != 0x3176))
      goto LAB_1801654c2;
      pcVar12 = *(char **)(local_98._0_8_ + 0x10);
      uVar15 = *(ulonglong *)(local_98._0_8_ + 0x18);
      if (uVar15 != 0) {
        if (0xb4 < uVar15) goto LAB_1801654c2;
        pcVar1 = pcVar12 + uVar15;
        for (; pcVar12 != pcVar1; pcVar12 = pcVar12 + 1) {
          cVar9 = *pcVar12;
          if (cVar9 < 'a') {
            if ((0x32 < (byte)(cVar9 - 0x2dU)) ||
               ((0x43ffffff01ff9U >> ((ulonglong)(byte)(cVar9 - 0x2dU) & 0x3f) & 1) == 0))
            goto LAB_1801654c2;
          }
          else if ('z' < cVar9) goto LAB_1801654c2;
        }
      }
      bVar3 = true;
LAB_18016509f:
      puVar13 = puVar14;
      if ((0xfff < (local_88 - (longlong)puVar14 & 0xfffffffffffffff0U)) &&
         (puVar13 = *(undefined8 **)((undefined8)puVar14 + -1),
         0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar13)))) goto LAB_18016553a;
LAB_1801650d2:
      FUN_1804547d0(puVar13);
LAB_1801654a7:
    } while (pcVar10 != (char *)0x0);
    FUN_180165570(&local_78);
  }
}



