// FUN_1805d1230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d1230 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805d1230(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_268 [32];
  int local_248;
  int local_240;
  int local_238 [132];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  piVar7 = local_238;
  local_238[4] = *(undefined4 *)(param_1 + 0x40);
  local_238[5] = *(undefined4 *)(param_1 + 0x44);
  local_238[1] = param_5;
  local_238[2] = param_2;
  local_238[3] = param_3;
  local_238[0] = param_4;
  do {
    while( true ) {
      uVar1 = piVar7[5];
      uVar2 = piVar7[1];
      iVar8 = piVar7[3];
      uVar5 = -*(int *)(param_1 + 4);
      uVar4 = uVar1;
      if ((int)uVar2 < (int)uVar1) {
        uVar4 = uVar2;
      }
      if ((int)(uVar4 & uVar5) <= iVar8) break;
LAB_1805d13a6:
      piVar7[8] = piVar7[4];
      iVar6 = piVar7[4] + piVar7[2];
      piVar7[9] = uVar1;
      piVar7[6] = iVar6 >> 1;
      piVar7[7] = (int)(uVar1 + iVar8) >> 1;
      param_4 = iVar6 + *piVar7 + piVar7[2] >> 2;
      piVar7[5] = (int)(uVar1 + iVar8 + uVar2 + iVar8) >> 2;
      piVar7[4] = param_4;
      piVar7[2] = *piVar7 + piVar7[2] >> 1;
      piVar7[3] = (int)(uVar2 + iVar8) >> 1;
      piVar7 = piVar7 + 4;
    }
    uVar4 = uVar2;
    if ((int)uVar2 < (int)uVar1) {
      uVar4 = uVar1;
    }
    if ((int)((uVar4 - 1) + *(int *)(param_1 + 4) & uVar5) < iVar8) goto LAB_1805d13a6;
    if (uVar1 != uVar2) {
      iVar8 = ((int)uVar2 <= (int)uVar1) + 1;
      if ((*(int *)(param_1 + 0x70) != iVar8) &&
         (((*(int *)(param_1 + 0x70) != 0 && (cVar3 = FUN_1805d1dc0(param_1), cVar3 != '\0')) ||
          (cVar3 = FUN_1805d2340(param_1,iVar8), cVar3 != '\0')))) {
      }
      iVar8 = *(int *)(param_1 + 0x4c);
      local_248 = *(int *)(param_1 + 0x48);
      if ((int)uVar1 < (int)uVar2) {
        local_240 = iVar8;
        cVar3 = FUN_1805d10d0(param_1,2,piVar7,FUN_1805d27e0);
      }
      else {
        local_240 = -local_248;
        piVar7[1] = -piVar7[1];
        local_248 = -iVar8;
        piVar7[3] = -piVar7[3];
        piVar7[5] = -piVar7[5];
        cVar3 = FUN_1805d10d0(param_1,2,piVar7,FUN_1805d27e0);
        piVar7[1] = -piVar7[1];
      }
      if (cVar3 != '\0') {
      }
    }
    *(int *)(param_1 + 0x40) = param_4;
    *(uint *)(param_1 + 0x44) = uVar2;
    if (piVar7 == local_238) {
    }
    param_4 = piVar7[-4];
    piVar7 = piVar7 + -4;
  } while( true );
}



