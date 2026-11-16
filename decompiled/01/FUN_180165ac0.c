// FUN_180165ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180165ac0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180165ac0(undefined8 *****param_1)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  undefined8 *****pppppuVar5;
  undefined1 auStack_68 [32];
  undefined8 *****local_48;
  undefined8 ****local_40;
  undefined8 *****local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1800a7de0();
  if (cVar2 == '\0') {
LAB_180165ae1:
    FUN_18015b930(param_1);
  }
  ppppuVar1 = param_1[2];
  do {
    if (ppppuVar1 == (undefined8 ****)0x0) {
LAB_180165bc2:
      FUN_18015b930(param_1);
    }
    pppppuVar5 = param_1;
    if ((undefined8 ****)0x7 < param_1[3]) {
      pppppuVar5 = (undefined8 *****)*param_1;
    }
    DVar3 = GetFileAttributesW((LPCWSTR)pppppuVar5);
    if (DVar3 == 0xffffffff) {
      DVar3 = GetLastError();
      if (1 < DVar3 - 2) goto LAB_180165ae1;
    }
    else if ((DVar3 >> 10 & 1) != 0) goto LAB_180165ae1;
    FUN_18015c130(param_1,local_38);
    local_48 = param_1;
    if ((undefined8 ****)0x7 < param_1[3]) {
      local_48 = (undefined8 *****)*param_1;
    }
    local_40 = param_1[2];
    iVar4 = FUN_180162c60(local_38,&local_48);
    if (iVar4 == 0) {
      FUN_18015b930(local_38);
      goto LAB_180165bc2;
    }
    if ((undefined8 ******)param_1 != local_38) {
      pppppuVar5 = local_38;
      if (7 < local_20) {
        pppppuVar5 = local_38[0];
      }
      FUN_1800f5190(param_1,pppppuVar5,local_28);
    }
    FUN_18015b930(local_38);
    ppppuVar1 = param_1[2];
  } while( true );
}



