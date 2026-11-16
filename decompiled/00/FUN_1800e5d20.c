// FUN_1800e5d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e5d20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e5d20(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_868 [32];
  longlong local_848;
  undefined8 local_840;
  longlong local_838;
  longlong local_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_868;
  local_828 = *param_1;
  uStack_820 = param_1[1];
  lVar2 = FUN_1800e5c10(&local_828);
  if (param_2[1] != 0) {
    local_828 = *param_2;
    uStack_820 = param_2[1];
    local_830 = FUN_1804528d0(&local_828);
    if ((local_830 == 0) || (cVar1 = FUN_1804513c0(local_830,1,0), cVar1 != '\0'))
    goto LAB_1800e5db2;
    local_848 = local_830;
    FUN_1800efde0(extraout_XMM0_Qa,
                  "HVHGODS rejected inaccessible live signature for %.*s address=0x%llX",
                  *(undefined4 *)(param_1 + 1),*param_1);
  }
  local_830 = 0;
LAB_1800e5db2:
  if (((lVar2 != 0) && (local_830 != 0)) && (lVar2 != local_830)) {
    FUN_18063ab10(local_818,0,0x800);
    local_840 = *param_1;
    local_848 = CONCAT44(local_848._4_4_,*(undefined4 *)(param_1 + 1));
    local_838 = lVar2;
    FUN_18015ad60(local_818,0x800,0xffffffffffffffff,
                  "HVHGODS rejected stale manifest RVA for %.*s manifest=0x%llX signature=0x%llX; using live signature"
                 );
    FUN_1800a9e50(3,local_818);
  }
}



