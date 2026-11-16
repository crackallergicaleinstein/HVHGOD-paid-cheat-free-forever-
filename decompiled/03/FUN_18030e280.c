// FUN_18030e280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030e280 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030e280(undefined8 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  DAT_180bda170 = DAT_180bda170 + 1;
  bVar2 = true;
  uVar9 = 0;
  do {
    uVar4 = param_1[2];
    uVar10 = uVar4;
    if (uVar9 + 0x4b0 < uVar4) {
      uVar10 = uVar9 + 0x4b0;
    }
    if (uVar10 < uVar4) {
      puVar6 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar6 = (undefined8 *)*param_1;
      }
      if (uVar4 != 0) {
        uVar5 = uVar10;
        if (uVar4 - 1 < uVar10) {
          uVar5 = uVar4 - 1;
        }
        lVar11 = uVar5 + 1 + (longlong)puVar6;
        lVar3 = thunk_FUN_1805f7d20(puVar6,lVar11,0x20);
        if (((lVar3 != lVar11) && (uVar4 = lVar3 - (longlong)puVar6, uVar4 != 0xffffffffffffffff))
           && (uVar9 + 600 < uVar4)) {
          uVar10 = uVar4;
        }
      }
    }
    local_50 = (undefined1  [16])0x0;
    local_40 = 0;
    local_38 = 0;
    if ((ulonglong)param_1[2] < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_180141470();
    }
    uVar5 = param_1[2] - uVar9;
    uVar4 = uVar10 - uVar9;
    if (uVar5 < uVar10 - uVar9) {
      uVar4 = uVar5;
    }
    puVar6 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar6 = (undefined8 *)*param_1;
    }
    FUN_18015ba30(local_50,(longlong)puVar6 + uVar9,uVar4);
    if (uVar10 < (ulonglong)param_1[2]) {
      do {
        puVar6 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar6 = (undefined8 *)*param_1;
        }
      } while ((*(char *)((longlong)puVar6 + uVar10) == ' ') &&
              (uVar10 = uVar10 + 1, uVar10 < (ulonglong)param_1[2]));
    }
    if (!bVar2) {
      FUN_180141490(local_50,0,"[pixelsurf+] ",0xd);
    }
    if (local_40 == 0) {
LAB_18030e3e7:
      FUN_18015af80(local_50,10);
    }
    else {
      puVar8 = local_50;
      if (0xf < local_38) {
        puVar8 = (undefined1 *)local_50._0_8_;
      }
      if (puVar8[local_40 + -1] != '\n') goto LAB_18030e3e7;
    }
    puVar8 = local_50;
    if ((local_38 < 0x10) ||
       (puVar8 = (undefined1 *)local_50._0_8_, (undefined1 *)local_50._0_8_ != (undefined1 *)0x0)) {
      puVar7 = (undefined1 *)FUN_1803b0a60();
      uVar1 = *puVar7;
      puVar7 = (undefined1 *)FUN_1803b0a60();
      *puVar7 = 1;
      FUN_1800a9e50(1,puVar8);
      puVar8 = (undefined1 *)FUN_1803b0a60();
      *puVar8 = uVar1;
    }
    DAT_180bda174 = DAT_180bda174 + 1;
    bVar2 = false;
    FUN_18015c010(local_50);
    uVar9 = uVar10;
    if ((ulonglong)param_1[2] <= uVar10) {
    }
  } while( true );
}



