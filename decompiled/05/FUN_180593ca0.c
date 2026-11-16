// FUN_180593ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180593ca0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180593ca0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_48 [32];
  char local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0x438);
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x3f8);
    do {
      lVar3 = *(longlong *)(param_1 + 0x440);
      if (*(short *)(param_1 + 0x132) == 0) {
        uVar8 = uVar9 * 2;
        uVar7 = lVar3 + 4 + (ulonglong)uVar8;
        uVar8 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar8 + lVar3),
                               *(undefined1 *)((ulonglong)uVar8 + 1 + lVar3));
        uVar4 = uVar8;
        if (uVar7 <= (ulonglong)(uVar1 * 2) + lVar3) {
          uVar4 = (uint)CONCAT11(*(undefined1 *)(uVar7 - 2),*(undefined1 *)(uVar7 - 1));
        }
        uVar8 = uVar8 * 2;
        uVar4 = uVar4 * 2;
      }
      else {
        uVar8 = uVar9 * 4;
        uVar7 = (ulonglong)uVar8;
        uVar6 = lVar3 + 8 + uVar7;
        uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar8 + lVar3),
                                           *(undefined1 *)((ulonglong)uVar8 + 1 + lVar3)),
                                  *(undefined1 *)(uVar7 + 2 + lVar3)),
                         *(undefined1 *)(uVar7 + 3 + lVar3));
        uVar4 = uVar8;
        if (uVar6 <= (ulonglong)(uVar1 * 4) + lVar3) {
          uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar6 - 4),*(undefined1 *)(uVar6 - 3)),
                                    *(undefined1 *)(uVar6 - 2)),*(undefined1 *)(uVar6 - 1));
        }
      }
      if (uVar8 <= uVar2) {
        if (uVar2 < uVar4) {
          if (uVar9 != uVar1 - 2) goto LAB_180593de1;
          uVar4 = uVar2;
        }
        iVar5 = uVar2 - uVar8;
        if (uVar8 <= uVar4) {
          iVar5 = uVar4 - uVar8;
        }
        if (iVar5 != 0) {
          uVar10 = uVar10 + 1;
          if (1 < uVar10) break;
          uVar11 = uVar9;
        }
      }
LAB_180593de1:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
    if ((((uVar10 == 1) && (uVar11 != 0)) &&
        (iVar5 = FUN_180573920(param_1,uVar11,local_28,8), iVar5 == 0)) && (local_28[0] == '.')) {
      strncmp(local_28,".notdef",8);
    }
  }
}



