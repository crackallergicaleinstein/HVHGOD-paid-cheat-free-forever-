// FUN_18046aef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046aef0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046aef0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  float local_68 [8];
  ulonglong local_48;
  
  pfVar4 = local_68;
  local_48 = DAT_1808d5f00 ^ (ulonglong)local_68;
  piVar7 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  if (piVar7 != piVar1) {
    lVar2 = *param_1;
    do {
      lVar6 = (longlong)*piVar7;
      if ((&DAT_18077eecc)[lVar6 * 0x20] != '\x03') {
        iVar5 = *(int *)(lVar6 * 0x9c + 8 + param_1[1]);
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        else if (1 < iVar5) {
          iVar5 = 1;
        }
        auVar3 = vmaxss_avx(ZEXT416((uint)local_68[iVar5]),ZEXT416(*(uint *)(lVar2 + 4 + lVar6 * 8))
                           );
        local_68[iVar5] = auVar3._0_4_;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar1);
  }
  do {
    pfVar4 = pfVar4 + 1;
  } while (pfVar4 != local_68 + 2);
}



