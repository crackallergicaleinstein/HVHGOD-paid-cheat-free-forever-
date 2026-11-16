// FUN_180275560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180275560 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180275560(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  char *local_58;
  longlong local_50;
  char *local_48;
  undefined8 local_40;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  iVar4 = DAT_180c64d28;
  if (DAT_180c64d28 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c64d30) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1805f68d0(&DAT_1808f0680);
      if (iVar4 != 0) goto LAB_1802757d8;
      if (DAT_1808f06cc == 0x7fffffff) {
        DAT_1808f06cc = 0x7ffffffe;
        goto LAB_1802757cd;
      }
      if ((DAT_180c64d28 == 0) && (DAT_180c64d30 <= UVar5)) {
        DAT_180c64d28 = FUN_1804174b0("C_CSPlayerPawn",0x268624b4);
        if (DAT_180c64d28 == 0) {
          DAT_180c64d30 = UVar5 + 1000;
        }
        else {
          DAT_180c64d30 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c64d28;
      FUN_1805f68fc(&DAT_1808f0680);
    }
  }
  uVar1 = *(undefined8 *)(iVar4 + param_3);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808f06d0;
  lVar3 = DAT_1808da460;
  if ((DAT_1808f06d0 == DAT_1808da460) && (pcVar7 = (code *)DAT_180c64d48, DAT_180c64d48 != 0))
  goto LAB_180275796;
  UVar5 = GetTickCount64();
  if ((lVar6 == lVar3) && (UVar5 < DAT_180c64d38)) {
    return param_2;
  }
  iVar4 = FUN_1805f68d0(&DAT_1808f06e0);
  if (iVar4 != 0) {
LAB_1802757d8:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808f072c == 0x7fffffff) {
    DAT_1808f072c = 0x7ffffffe;
LAB_1802757cd:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar8 = 1000;
  if (DAT_1808f06d0 == lVar3) {
    if ((DAT_180c64d48 == 0) && (DAT_180c64d38 <= UVar5)) goto LAB_180275705;
  }
  else {
    DAT_1808f06d8 = 1000;
LAB_180275705:
    lVar6 = -1;
    do {
      local_50 = lVar6 + 1;
      lVar2 = lVar6 + 1;
      lVar6 = local_50;
    } while ("client.dll:48895C2408555657488D6C24B94881EC90000000833D????????FF488BF2488BF9"[lVar2]
             != '\0');
    local_58 = "client.dll:48895C2408555657488D6C24B94881EC90000000833D????????FF488BF2488BF9";
    local_48 = "patterns::get_aim_punch";
    local_40 = 0x17;
    DAT_180c64d48 = FUN_1800e5d20(&local_48,&local_58);
    DAT_1808f06d0 = lVar3;
    DAT_180c64d38 = 0xffffffffffffffff;
    if (DAT_180c64d48 == 0) {
      DAT_180c64d38 = DAT_1808f06d8 + UVar5;
      uVar8 = 60000;
      if (DAT_1808f06d8 < 60000) {
        uVar8 = DAT_1808f06d8 * 2;
      }
    }
    DAT_1808f06d8 = uVar8;
  }
  pcVar7 = (code *)DAT_180c64d48;
  FUN_1805f68fc(&DAT_1808f06e0);
  if (pcVar7 == (code *)0x0) {
    return param_2;
  }
LAB_180275796:
  (*pcVar7)(uVar1,param_2,0);
  return param_2;
}



