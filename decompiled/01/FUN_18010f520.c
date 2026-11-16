// FUN_18010f520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010f520 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18010f520(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  char *local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_50 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_78 = "tier0.dll:g_pMemAlloc";
    local_70 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_78);
  }
  pcVar2 = (char *)(**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
  local_50._8_8_ = pcVar2;
  local_50._0_8_ = local_40;
  param_2 = (undefined8 *)*param_2;
  param_1 = (undefined8 *)*param_1;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  lVar4 = (longlong)param_2 - (longlong)param_1;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  uVar5 = (lVar4 >> 2) - (lVar4 >> 0x3f);
  if (uVar5 != 0) {
    if (0xfffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    puVar3 = (undefined8 *)FUN_18015bca0(uVar5 * 0x10);
    *(undefined8 **)pcVar2 = puVar3;
    *(undefined8 **)(pcVar2 + 8) = puVar3;
    *(undefined8 **)(pcVar2 + 0x10) = puVar3 + uVar5 * 2;
    local_68._8_8_ = puVar3;
    local_68._0_8_ = puVar3;
    local_78 = pcVar2;
    local_58 = pcVar2;
    for (; param_1 != param_2; param_1 = param_1 + 3) {
      if (param_1[2] == 0) {
        uVar1 = param_1[1];
        *puVar3 = *param_1;
        puVar3[1] = uVar1;
        *(undefined1 *)param_1 = 0;
        param_1[1] = 0;
      }
      else {
        FUN_1800f4a50(puVar3);
      }
      puVar3 = puVar3 + 2;
      local_68._8_8_ = puVar3;
    }
    *(undefined8 **)(pcVar2 + 8) = puVar3;
  }
}



