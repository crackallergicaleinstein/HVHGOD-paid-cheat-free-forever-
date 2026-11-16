// FUN_1801c7960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c7960 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001801c87f4) */
/* WARNING: Removing unreachable block (ram,0x0001801c7bf5) */
/* WARNING: Removing unreachable block (ram,0x0001801c7c18) */
/* WARNING: Removing unreachable block (ram,0x0001801c7c3b) */
/* WARNING: Removing unreachable block (ram,0x0001801c7c49) */
/* WARNING: Removing unreachable block (ram,0x0001801c7c6c) */
/* WARNING: Removing unreachable block (ram,0x0001801c7c8f) */
/* WARNING: Removing unreachable block (ram,0x0001801c7c9d) */
/* WARNING: Removing unreachable block (ram,0x0001801c7caf) */
/* WARNING: Removing unreachable block (ram,0x0001801c7cc0) */
/* WARNING: Removing unreachable block (ram,0x0001801c7d00) */
/* WARNING: Removing unreachable block (ram,0x0001801c8fa1) */
/* WARNING: Removing unreachable block (ram,0x0001801c7d31) */
/* WARNING: Removing unreachable block (ram,0x0001801c7d41) */
/* WARNING: Removing unreachable block (ram,0x0001801c7e0e) */
/* WARNING: Removing unreachable block (ram,0x0001801c7e30) */
/* WARNING: Removing unreachable block (ram,0x0001801c7ed2) */
/* WARNING: Removing unreachable block (ram,0x0001801c7ef4) */
/* WARNING: Removing unreachable block (ram,0x0001801c7f9f) */
/* WARNING: Removing unreachable block (ram,0x0001801c80eb) */
/* WARNING: Removing unreachable block (ram,0x0001801c8107) */
/* WARNING: Removing unreachable block (ram,0x0001801c810f) */
/* WARNING: Removing unreachable block (ram,0x0001801c90bc) */
/* WARNING: Removing unreachable block (ram,0x0001801c8118) */
/* WARNING: Removing unreachable block (ram,0x0001801c813c) */
/* WARNING: Removing unreachable block (ram,0x0001801c814d) */
/* WARNING: Removing unreachable block (ram,0x0001801c8156) */
/* WARNING: Removing unreachable block (ram,0x0001801c8148) */
/* WARNING: Removing unreachable block (ram,0x0001801c815a) */
/* WARNING: Removing unreachable block (ram,0x0001801c811e) */
/* WARNING: Removing unreachable block (ram,0x0001801c8181) */
/* WARNING: Removing unreachable block (ram,0x0001801c8189) */
/* WARNING: Removing unreachable block (ram,0x0001801c8195) */
/* WARNING: Removing unreachable block (ram,0x0001801c81a0) */
/* WARNING: Removing unreachable block (ram,0x0001801c81a7) */
/* WARNING: Removing unreachable block (ram,0x0001801c81ab) */
/* WARNING: Removing unreachable block (ram,0x0001801c81af) */
/* WARNING: Removing unreachable block (ram,0x0001801c81b7) */
/* WARNING: Removing unreachable block (ram,0x0001801c8212) */
/* WARNING: Removing unreachable block (ram,0x0001801c821f) */
/* WARNING: Removing unreachable block (ram,0x0001801c8233) */
/* WARNING: Removing unreachable block (ram,0x0001801c823d) */
/* WARNING: Removing unreachable block (ram,0x0001801c8441) */
/* WARNING: Removing unreachable block (ram,0x0001801c8449) */
/* WARNING: Removing unreachable block (ram,0x0001801c8cbe) */
/* WARNING: Removing unreachable block (ram,0x0001801c8cc3) */
/* WARNING: Removing unreachable block (ram,0x0001801c8cdd) */
/* WARNING: Removing unreachable block (ram,0x0001801c8cf6) */
/* WARNING: Removing unreachable block (ram,0x0001801c8cfb) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d26) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d2a) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d58) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d60) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d6e) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d71) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d7b) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d80) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d93) */
/* WARNING: Removing unreachable block (ram,0x0001801c8db0) */
/* WARNING: Removing unreachable block (ram,0x0001801c8db4) */
/* WARNING: Removing unreachable block (ram,0x0001801c8dbd) */
/* WARNING: Removing unreachable block (ram,0x0001801c8dc6) */
/* WARNING: Removing unreachable block (ram,0x0001801c8dd0) */
/* WARNING: Removing unreachable block (ram,0x0001801c8dd9) */
/* WARNING: Removing unreachable block (ram,0x0001801c8de8) */
/* WARNING: Removing unreachable block (ram,0x0001801c8df0) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e02) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e05) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e10) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e23) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e3e) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e46) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e57) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e5e) */
/* WARNING: Removing unreachable block (ram,0x0001801c8d18) */
/* WARNING: Removing unreachable block (ram,0x0001801c7fb1) */
/* WARNING: Removing unreachable block (ram,0x0001801c800d) */
/* WARNING: Removing unreachable block (ram,0x0001801c801b) */
/* WARNING: Removing unreachable block (ram,0x0001801c8027) */
/* WARNING: Removing unreachable block (ram,0x0001801c8246) */
/* WARNING: Removing unreachable block (ram,0x0001801c8251) */
/* WARNING: Removing unreachable block (ram,0x0001801c825d) */
/* WARNING: Removing unreachable block (ram,0x0001801c8266) */
/* WARNING: Removing unreachable block (ram,0x0001801c826f) */
/* WARNING: Removing unreachable block (ram,0x0001801c8280) */
/* WARNING: Removing unreachable block (ram,0x0001801c82a4) */
/* WARNING: Removing unreachable block (ram,0x0001801c82ba) */
/* WARNING: Removing unreachable block (ram,0x0001801c82c3) */
/* WARNING: Removing unreachable block (ram,0x0001801c82ca) */
/* WARNING: Removing unreachable block (ram,0x0001801c82ce) */
/* WARNING: Removing unreachable block (ram,0x0001801c82d8) */
/* WARNING: Removing unreachable block (ram,0x0001801c82e0) */
/* WARNING: Removing unreachable block (ram,0x0001801c82fc) */
/* WARNING: Removing unreachable block (ram,0x0001801c8304) */
/* WARNING: Removing unreachable block (ram,0x0001801c90c2) */
/* WARNING: Removing unreachable block (ram,0x0001801c8314) */
/* WARNING: Removing unreachable block (ram,0x0001801c8338) */
/* WARNING: Removing unreachable block (ram,0x0001801c8349) */
/* WARNING: Removing unreachable block (ram,0x0001801c8352) */
/* WARNING: Removing unreachable block (ram,0x0001801c8344) */
/* WARNING: Removing unreachable block (ram,0x0001801c8356) */
/* WARNING: Removing unreachable block (ram,0x0001801c831a) */
/* WARNING: Removing unreachable block (ram,0x0001801c837d) */
/* WARNING: Removing unreachable block (ram,0x0001801c8385) */
/* WARNING: Removing unreachable block (ram,0x0001801c8391) */
/* WARNING: Removing unreachable block (ram,0x0001801c83a0) */
/* WARNING: Removing unreachable block (ram,0x0001801c83a7) */
/* WARNING: Removing unreachable block (ram,0x0001801c83ab) */
/* WARNING: Removing unreachable block (ram,0x0001801c83af) */
/* WARNING: Removing unreachable block (ram,0x0001801c83b7) */
/* WARNING: Removing unreachable block (ram,0x0001801c841b) */
/* WARNING: Removing unreachable block (ram,0x0001801c8422) */
/* WARNING: Removing unreachable block (ram,0x0001801c8410) */
/* WARNING: Removing unreachable block (ram,0x0001801c8424) */
/* WARNING: Removing unreachable block (ram,0x0001801c842a) */
/* WARNING: Removing unreachable block (ram,0x0001801c842e) */
/* WARNING: Removing unreachable block (ram,0x0001801c844e) */
/* WARNING: Removing unreachable block (ram,0x0001801c8459) */
/* WARNING: Removing unreachable block (ram,0x0001801c8465) */
/* WARNING: Removing unreachable block (ram,0x0001801c8472) */
/* WARNING: Removing unreachable block (ram,0x0001801c847b) */
/* WARNING: Removing unreachable block (ram,0x0001801c84f1) */
/* WARNING: Removing unreachable block (ram,0x0001801c8515) */
/* WARNING: Removing unreachable block (ram,0x0001801c852b) */
/* WARNING: Removing unreachable block (ram,0x0001801c8556) */
/* WARNING: Removing unreachable block (ram,0x0001801c856c) */
/* WARNING: Removing unreachable block (ram,0x0001801c8597) */
/* WARNING: Removing unreachable block (ram,0x0001801c85a8) */
/* WARNING: Removing unreachable block (ram,0x0001801c85c5) */
/* WARNING: Removing unreachable block (ram,0x0001801c85e9) */
/* WARNING: Removing unreachable block (ram,0x0001801c87b6) */
/* WARNING: Removing unreachable block (ram,0x0001801c85f7) */
/* WARNING: Removing unreachable block (ram,0x0001801c860a) */
/* WARNING: Removing unreachable block (ram,0x0001801c861c) */
/* WARNING: Removing unreachable block (ram,0x0001801c8621) */
/* WARNING: Removing unreachable block (ram,0x0001801c862c) */
/* WARNING: Removing unreachable block (ram,0x0001801c863f) */
/* WARNING: Removing unreachable block (ram,0x0001801c864b) */
/* WARNING: Removing unreachable block (ram,0x0001801c8656) */
/* WARNING: Removing unreachable block (ram,0x0001801c8652) */
/* WARNING: Removing unreachable block (ram,0x0001801c865c) */
/* WARNING: Removing unreachable block (ram,0x0001801c8670) */
/* WARNING: Removing unreachable block (ram,0x0001801c90c8) */
/* WARNING: Removing unreachable block (ram,0x0001801c868e) */
/* WARNING: Removing unreachable block (ram,0x0001801c869d) */
/* WARNING: Removing unreachable block (ram,0x0001801c86a5) */
/* WARNING: Removing unreachable block (ram,0x0001801c86e5) */
/* WARNING: Removing unreachable block (ram,0x0001801c86ed) */
/* WARNING: Removing unreachable block (ram,0x0001801c8723) */
/* WARNING: Removing unreachable block (ram,0x0001801c8728) */
/* WARNING: Removing unreachable block (ram,0x0001801c872c) */
/* WARNING: Removing unreachable block (ram,0x0001801c8731) */
/* WARNING: Removing unreachable block (ram,0x0001801c8740) */
/* WARNING: Removing unreachable block (ram,0x0001801c8748) */
/* WARNING: Removing unreachable block (ram,0x0001801c874c) */
/* WARNING: Removing unreachable block (ram,0x0001801c8751) */
/* WARNING: Removing unreachable block (ram,0x0001801c8759) */
/* WARNING: Removing unreachable block (ram,0x0001801c87a9) */
/* WARNING: Removing unreachable block (ram,0x0001801c87bb) */
/* WARNING: Removing unreachable block (ram,0x0001801c87b2) */
/* WARNING: Removing unreachable block (ram,0x0001801c87bd) */
/* WARNING: Removing unreachable block (ram,0x0001801c87c3) */
/* WARNING: Removing unreachable block (ram,0x0001801c87d4) */
/* WARNING: Removing unreachable block (ram,0x0001801c87da) */
/* WARNING: Removing unreachable block (ram,0x0001801c87e7) */
/* WARNING: Removing unreachable block (ram,0x0001801c87ef) */
/* WARNING: Removing unreachable block (ram,0x0001801c87fc) */
/* WARNING: Removing unreachable block (ram,0x0001801c8823) */
/* WARNING: Removing unreachable block (ram,0x0001801c882b) */
/* WARNING: Removing unreachable block (ram,0x0001801c883e) */
/* WARNING: Removing unreachable block (ram,0x0001801c8862) */
/* WARNING: Removing unreachable block (ram,0x0001801c8873) */
/* WARNING: Removing unreachable block (ram,0x0001801c887c) */
/* WARNING: Removing unreachable block (ram,0x0001801c886e) */
/* WARNING: Removing unreachable block (ram,0x0001801c8880) */
/* WARNING: Removing unreachable block (ram,0x0001801c8844) */
/* WARNING: Removing unreachable block (ram,0x0001801c88a7) */
/* WARNING: Removing unreachable block (ram,0x0001801c88af) */
/* WARNING: Removing unreachable block (ram,0x0001801c88bb) */
/* WARNING: Removing unreachable block (ram,0x0001801c88c3) */
/* WARNING: Removing unreachable block (ram,0x0001801c88ca) */
/* WARNING: Removing unreachable block (ram,0x0001801c88ce) */
/* WARNING: Removing unreachable block (ram,0x0001801c88d2) */
/* WARNING: Removing unreachable block (ram,0x0001801c88da) */
/* WARNING: Removing unreachable block (ram,0x0001801c8953) */
/* WARNING: Removing unreachable block (ram,0x0001801c8957) */
/* WARNING: Removing unreachable block (ram,0x0001801c8964) */
/* WARNING: Removing unreachable block (ram,0x0001801c8973) */
/* WARNING: Removing unreachable block (ram,0x0001801c897b) */
/* WARNING: Removing unreachable block (ram,0x0001801c897f) */
/* WARNING: Removing unreachable block (ram,0x0001801c898a) */
/* WARNING: Removing unreachable block (ram,0x0001801c898e) */
/* WARNING: Removing unreachable block (ram,0x0001801c89b3) */
/* WARNING: Removing unreachable block (ram,0x0001801c89be) */
/* WARNING: Removing unreachable block (ram,0x0001801c89c2) */
/* WARNING: Removing unreachable block (ram,0x0001801c89d2) */
/* WARNING: Removing unreachable block (ram,0x0001801c89d7) */
/* WARNING: Removing unreachable block (ram,0x0001801c89df) */
/* WARNING: Removing unreachable block (ram,0x0001801c89e5) */
/* WARNING: Removing unreachable block (ram,0x0001801c89ed) */
/* WARNING: Removing unreachable block (ram,0x0001801c89f1) */
/* WARNING: Removing unreachable block (ram,0x0001801c89fc) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a00) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a2f) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a3a) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a3e) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a48) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a51) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a5d) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a6c) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a74) */
/* WARNING: Removing unreachable block (ram,0x0001801c8a84) */
/* WARNING: Removing unreachable block (ram,0x0001801c8aa2) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e63) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e90) */
/* WARNING: Removing unreachable block (ram,0x0001801c8e95) */
/* WARNING: Removing unreachable block (ram,0x0001801c8eaf) */
/* WARNING: Removing unreachable block (ram,0x0001801c90d4) */
/* WARNING: Removing unreachable block (ram,0x0001801c8ec8) */
/* WARNING: Removing unreachable block (ram,0x0001801c8ecd) */
/* WARNING: Removing unreachable block (ram,0x0001801c8edb) */
/* WARNING: Removing unreachable block (ram,0x0001801c8ede) */
/* WARNING: Removing unreachable block (ram,0x0001801c8ee7) */
/* WARNING: Removing unreachable block (ram,0x0001801c8ef0) */
/* WARNING: Removing unreachable block (ram,0x0001801c8f01) */
/* WARNING: Removing unreachable block (ram,0x0001801c8f08) */
/* WARNING: Removing unreachable block (ram,0x0001801c8f41) */
/* WARNING: Removing unreachable block (ram,0x0001801c90e9) */
/* WARNING: Removing unreachable block (ram,0x0001801c8f5a) */
/* WARNING: Removing unreachable block (ram,0x0001801c8f79) */
/* WARNING: Removing unreachable block (ram,0x0001801c8fa4) */
/* WARNING: Removing unreachable block (ram,0x0001801c8aaf) */
/* WARNING: Removing unreachable block (ram,0x0001801c8ac7) */
/* WARNING: Removing unreachable block (ram,0x0001801c8acf) */
/* WARNING: Removing unreachable block (ram,0x0001801c8ade) */
/* WARNING: Removing unreachable block (ram,0x0001801c8ae6) */
/* WARNING: Removing unreachable block (ram,0x0001801c8afd) */
/* WARNING: Removing unreachable block (ram,0x0001801c8b02) */
/* WARNING: Removing unreachable block (ram,0x0001801c8b06) */
/* WARNING: Removing unreachable block (ram,0x0001801c8b0b) */
/* WARNING: Removing unreachable block (ram,0x0001801c8b17) */
/* WARNING: Removing unreachable block (ram,0x0001801c8b1f) */
/* WARNING: Removing unreachable block (ram,0x0001801c8b23) */
/* WARNING: Removing unreachable block (ram,0x0001801c8b28) */
/* WARNING: Removing unreachable block (ram,0x0001801c8b30) */
/* WARNING: Removing unreachable block (ram,0x0001801c8ba2) */
/* WARNING: Removing unreachable block (ram,0x0001801c8bbf) */
/* WARNING: Removing unreachable block (ram,0x0001801c8bc3) */
/* WARNING: Removing unreachable block (ram,0x0001801c90ce) */
/* WARNING: Removing unreachable block (ram,0x0001801c8bd6) */
/* WARNING: Removing unreachable block (ram,0x0001801c8bf3) */
/* WARNING: Removing unreachable block (ram,0x0001801c8c04) */
/* WARNING: Removing unreachable block (ram,0x0001801c8c0d) */
/* WARNING: Removing unreachable block (ram,0x0001801c8bff) */
/* WARNING: Removing unreachable block (ram,0x0001801c8c11) */
/* WARNING: Removing unreachable block (ram,0x0001801c8bdc) */
/* WARNING: Removing unreachable block (ram,0x0001801c8c35) */
/* WARNING: Removing unreachable block (ram,0x0001801c8c69) */
/* WARNING: Removing unreachable block (ram,0x0001801c8c49) */
/* WARNING: Removing unreachable block (ram,0x0001801c8c7a) */
/* WARNING: Removing unreachable block (ram,0x0001801c8033) */
/* WARNING: Removing unreachable block (ram,0x0001801c8049) */
/* WARNING: Removing unreachable block (ram,0x0001801c806d) */
/* WARNING: Removing unreachable block (ram,0x0001801c8084) */
/* WARNING: Removing unreachable block (ram,0x0001801c80a1) */
/* WARNING: Removing unreachable block (ram,0x0001801c80c7) */
/* WARNING: Removing unreachable block (ram,0x0001801c80d5) */
/* WARNING: Removing unreachable block (ram,0x0001801c822a) */
/* WARNING: Removing unreachable block (ram,0x0001801c8231) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b31) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b47) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b4e) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b50) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b57) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b5b) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b65) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b6d) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b7c) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b81) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b8c) */
/* WARNING: Removing unreachable block (ram,0x0001801c7b95) */
/* WARNING: Removing unreachable block (ram,0x0001801c7bab) */
/* WARNING: Removing unreachable block (ram,0x0001801c7bce) */
/* WARNING: Removing unreachable block (ram,0x0001801c7bdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c7960(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStackY_3d8 [32];
  longlong local_2a8;
  longlong lStack_2a0;
  undefined1 local_298 [256];
  undefined1 local_198 [16];
  longlong local_188;
  undefined1 local_180 [16];
  longlong local_170;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStackY_3d8;
  uVar1 = param_1[1];
  if (((uVar1 != 0) && (uVar1 < 0x1000001)) && (*(char *)((uVar1 - 1) + *param_1) == '\n')) {
    param_1[1] = uVar1 - 1;
    local_180 = (undefined1  [16])0x0;
    local_170 = 0;
    local_2a8 = *param_1;
    lStack_2a0 = param_1[1];
    FUN_1801c7710(local_180,&local_2a8);
    plVar3 = (longlong *)local_180._0_8_;
    if (((((longlong)(local_180._8_8_ - local_180._0_8_) >> 4) - 3U < 0x5220) &&
        (*(longlong *)(local_180._0_8_ + 0x18) == 0x1a)) &&
       (iVar2 = memcmp(*(void **)(local_180._0_8_ + 0x10),"HVHGOD-INTERNAL-OFFSETS-V1",0x1a),
       iVar2 == 0)) {
      local_198 = (undefined1  [16])0x0;
      local_188 = 0;
      local_2a8 = *plVar3;
      lStack_2a0 = *(longlong *)((undefined8)plVar3 + 1);
      FUN_1801c7710(local_198,&local_2a8);
      if ((((local_198._8_8_ - local_198._0_8_ & 0xfffffffffffffff0) == 0xb0) &&
          (*(longlong *)(local_198._0_8_ + 8) == 2)) &&
         ((**(short **)local_198._0_8_ == 0x3176 &&
          (*(longlong *)(local_198._0_8_ + 0x18) - 1U < 0x14)))) {
        FUN_1801bd650(local_298);
      }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
      if ((undefined8 *)local_198._0_8_ != (undefined8 *)0x0) {
        if ((0xfff < (local_188 - local_198._0_8_ & 0xfffffffffffffff0U)) &&
           (0x1f < (ulonglong)(local_198._0_8_ + (-8 - *(longlong *)(local_198._0_8_ + -8))))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0();
        local_198 = (undefined1  [16])0x0;
        local_188 = 0;
      }
      plVar3 = (longlong *)local_180._0_8_;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
      if ((0xfff < (local_170 - (longlong)plVar3 & 0xfffffffffffffff0U)) &&
         (plVar4 = (longlong *)plVar3[-1],
         0x1f < (ulonglong)((longlong)plVar3 + (-8 - (longlong)plVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(plVar4);
    }
  }
}



