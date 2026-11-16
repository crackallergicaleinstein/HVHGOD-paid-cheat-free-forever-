// FUN_180010a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180010a30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180010a30(undefined8 *param_1,longlong *param_2,DWORD param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStackY_78 [32];
  DWORD local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStackY_78;
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (uVar5 <= (param_4 * 4) / 3 + 8)) {
    local_38 = 0;
    BVar3 = CryptStringToBinaryA
                      ((LPCSTR)*param_1,(DWORD)uVar5,param_3,(BYTE *)0x0,&local_38,(DWORD *)0x0,
                       (DWORD *)0x0);
    if (BVar3 != 0) {
      uVar5 = (ulonglong)local_38;
      uVar4 = 0;
      if (local_38 == 0) goto LAB_180010a78;
      if (uVar5 <= param_4) {
        lVar1 = *param_2;
        lVar2 = param_2[1];
        lVar6 = uVar5 - (lVar2 - lVar1);
        if (uVar5 < (ulonglong)(lVar2 - lVar1)) {
          param_2[1] = lVar1 + uVar5;
        }
        else if (lVar6 != 0) {
          if ((ulonglong)(param_2[2] - lVar1) < uVar5) {
            FUN_180211c30(param_2,uVar5,&local_31);
          }
          else {
            FUN_18063ab10(lVar2,0);
            param_2[1] = lVar2 + lVar6;
          }
        }
        BVar3 = CryptStringToBinaryA
                          ((LPCSTR)*param_1,*(DWORD *)(param_1 + 1),param_3,(BYTE *)*param_2,
                           &local_38,(DWORD *)0x0,(DWORD *)0x0);
        uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,BVar3) >> 8),BVar3 != 0);
        goto LAB_180010a78;
      }
    }
  }
  uVar4 = 0;
LAB_180010a78:
  if (DAT_1808d5f00 != (local_30 ^ (ulonglong)auStackY_78)) {
  }
  return uVar4;
}



