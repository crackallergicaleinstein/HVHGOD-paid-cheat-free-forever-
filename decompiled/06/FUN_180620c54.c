// FUN_180620c54 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180620c54 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180620c54(undefined8 param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  FUN_18063ab10(param_1,0,0x1ca);
  plVar7 = local_a0;
  uVar6 = 0;
LAB_180620c9f:
  do {
    iVar8 = 0;
    uVar5 = uVar6;
    while( true ) {
      if (3 < uVar5) {
      }
      if (iVar8 == 2) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (param_2[lVar3] != 0);
      }
      else {
        lVar3 = FUN_18062fb10(param_2,&DAT_1806b03b0);
      }
      plVar7[-1] = (longlong)param_2;
      uVar6 = uVar5 + 1;
      *plVar7 = lVar3;
      sVar1 = param_2[lVar3];
      param_2 = param_2 + lVar3 + 1;
      *(int *)(plVar7 + 1) = iVar8;
      plVar7 = plVar7 + 3;
      if (sVar1 == 0) goto LAB_180620d06;
      if (sVar1 == 0x2d) goto LAB_180620c9f;
      if (sVar1 != 0x2e) break;
      iVar8 = 2;
      uVar5 = uVar6;
    }
  } while (sVar1 == 0x5f);
LAB_180620d06:
  if (uVar5 == 0) {
    FUN_180620e98(param_1,local_a8);
  }
  else {
    if (uVar5 == 1) {
      cVar2 = FUN_180620e98(param_1,local_a8);
      if (cVar2 == '\0') {
      }
      cVar2 = FUN_180621018(param_1,local_90);
      if (cVar2 != '\0') {
      }
      cVar2 = FUN_180620f24(param_1,local_90);
      if (cVar2 != '\0') {
      }
      puVar4 = local_90;
    }
    else if (uVar5 == 2) {
      cVar2 = FUN_180620e98(param_1,local_a8);
      if (cVar2 == '\0') {
      }
      cVar2 = FUN_180621018(param_1,local_90);
      if (cVar2 != '\0') {
        cVar2 = FUN_180620f24(param_1,local_78);
        if (cVar2 != '\0') {
        }
        cVar2 = FUN_180620e50(param_1,local_78);
        if (cVar2 != '\0') {
        }
      }
      cVar2 = FUN_180620f24(param_1,local_90);
      if (cVar2 == '\0') {
      }
      puVar4 = local_78;
    }
    else {
      if (uVar5 != 3) {
      }
      cVar2 = FUN_180620e98(param_1,local_a8);
      if (cVar2 == '\0') {
      }
      cVar2 = FUN_180621018(param_1,local_90);
      if (cVar2 == '\0') {
      }
      cVar2 = FUN_180620f24(param_1,local_78);
      if (cVar2 == '\0') {
      }
      puVar4 = local_60;
    }
    FUN_180620e50(param_1,puVar4);
  }
}



