// FUN_180273020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180273020 */

undefined1 (*) [16] FUN_180273020(longlong param_1,undefined1 (*param_2) [16],ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  PSRWLOCK SRWLock;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_b4;
  int local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined1 (*local_78) [16];
  
  local_78 = param_2;
  puVar5 = (undefined8 *)FUN_180270b60(local_98);
  local_a8 = *puVar5;
  local_a0 = *(undefined4 *)(puVar5 + 1);
  if ((DAT_180cad2e0 == 1) && (DAT_180cad3c0 != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x40);
  local_88[8] = 1;
  local_88._0_8_ = SRWLock;
  local_88._9_7_ = 0;
  AcquireSRWLockShared(SRWLock);
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)*param_2 = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  *(undefined8 *)param_2[1] = 0;
  uVar8 = ((((((((param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_3 >> 8 & 0xff) *
                0x100000001b3 ^ param_3 >> 0x10 & 0xff) * 0x100000001b3 ^ param_3 >> 0x18 & 0xff) *
              0x100000001b3 ^ param_3 >> 0x20 & 0xff) * 0x100000001b3 ^ param_3 >> 0x28 & 0xff) *
            0x100000001b3 ^ param_3 >> 0x30 & 0xff) * 0x100000001b3 ^ param_3 >> 0x38) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar8 * 0x10);
  if (lVar10 == *(longlong *)(param_1 + 8)) {
LAB_180273191:
    lVar10 = 0;
  }
  else {
    uVar11 = *(ulonglong *)(lVar10 + 0x10);
    while (param_3 != uVar11) {
      if (lVar10 == *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x10)) goto LAB_180273191;
      lVar10 = *(longlong *)(lVar10 + 8);
      uVar11 = *(ulonglong *)(lVar10 + 0x10);
    }
  }
  if ((lVar10 != 0) && (lVar10 != *(longlong *)(param_1 + 8))) {
    uVar8 = *(ulonglong *)(lVar10 + 0x38);
    if (uVar8 != 0) {
      if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar6 = FUN_18015bca0(uVar8 * 8);
      FUN_18063aed0(lVar6);
      lVar1 = *(longlong *)*param_2;
      if (lVar1 != 0) {
        lVar9 = lVar1;
        if ((0xfff < (*(longlong *)param_2[1] - lVar1 & 0xfffffffffffffff8U)) &&
           (lVar9 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar9) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(lVar9);
      }
      *(longlong *)*param_2 = lVar6;
      *(longlong *)(*param_2 + 8) = lVar6;
      *(ulonglong *)param_2[1] = uVar8 * 8 + lVar6;
    }
    uVar8 = *(ulonglong *)(lVar10 + 0x30);
    uVar11 = *(longlong *)(lVar10 + 0x38) + uVar8;
    if (uVar8 != uVar11) {
      fVar14 = 1000.0;
      fVar13 = (float)local_a8;
      do {
        lVar1 = *(longlong *)
                 (*(longlong *)(lVar10 + 0x20) + (*(longlong *)(lVar10 + 0x28) - 1U & uVar8) * 8);
        if (*(char *)(lVar1 + 0x23b8) != '\0') {
          fVar12 = *(float *)(lVar1 + 0x23b0);
          cVar4 = FUN_180232a20(&local_a8,fVar12);
          if (cVar4 != '\0') {
            plVar2 = *(longlong **)(*param_2 + 8);
            if (*(longlong **)*param_2 == plVar2) {
LAB_1802732f7:
              local_98[0] = lVar1;
              if (plVar2 == *(longlong **)param_2[1]) {
                FUN_1801b6250(param_2,plVar2,local_98);
              }
              else {
                *plVar2 = lVar1;
                *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 8;
              }
              if (!bVar3) break;
            }
            else if (bVar3) {
              local_b0[0] = DAT_180cad428;
              local_b4 = 0;
              piVar7 = &local_b4;
              if (-1 < DAT_180cad428) {
                piVar7 = local_b0;
              }
              if (200 < DAT_180cad428) {
                piVar7 = &DAT_1806ff9a8;
              }
              if (fVar13 - fVar12 <= (float)*piVar7 / fVar14) goto LAB_1802732f7;
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar11);
      SRWLock = (PSRWLOCK)local_88._0_8_;
    }
  }
  ReleaseSRWLockShared(SRWLock);
  return param_2;
}



