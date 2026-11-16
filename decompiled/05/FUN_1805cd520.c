// FUN_1805cd520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cd520 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805cd520(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 auStack_1d8 [32];
  undefined1 *local_1b8;
  uint local_1b0;
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined1 *local_198;
  uint local_190;
  undefined *local_188;
  undefined1 *local_180;
  longlong local_178;
  longlong local_170;
  undefined4 local_168;
  undefined2 local_164;
  undefined2 local_162;
  longlong local_160;
  longlong local_158;
  undefined1 local_148 [276];
  int local_34;
  uint local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  local_160 = *(longlong *)(param_1 + 0x290);
  if ((local_160 != 0) && (3 < *(uint *)(param_1 + 0x298))) {
    puVar4 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x298) + local_160);
    local_1b0 = (uint)CONCAT11(*(undefined1 *)(local_160 + 2),*(undefined1 *)(local_160 + 3));
    puVar1 = (undefined1 *)(local_160 + 4);
    local_180 = puVar4;
    local_178 = param_1;
    while ((local_1b0 != 0 && (puVar1 + 8 <= puVar4))) {
      local_164 = CONCAT11(*puVar1,puVar1[1]);
      local_162 = CONCAT11(puVar1[2],puVar1[3]);
      local_1b8 = puVar1 + 8;
      local_168 = 0;
      uVar3 = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
      if ((uVar3 != 0) && (uVar3 <= *(int *)(param_1 + 0x298) - 2U)) {
        local_198 = (undefined1 *)((ulonglong)uVar3 + local_160);
        local_190 = (uint)CONCAT11(*local_198,local_198[1]);
        local_1a8 = &PTR_DAT_180684830;
        do {
          local_188 = *local_1a8;
          if (*(uint *)(local_188 + 0x50) == local_190) {
            local_1a0 = 0;
            local_170 = param_1;
            FUN_18057bda0(local_148,local_198,puVar4,0);
            local_28 = (uint)*(ushort *)(param_1 + 0x174);
            iVar2 = FUN_18063a930(local_148,auStack_1d8);
            if (iVar2 == 0) {
              local_1a0 = (**(code **)(local_188 + 0x58))(local_198,local_148);
            }
            if ((local_34 == 0) &&
               (iVar2 = FUN_180573150(local_188,local_198,&local_170), iVar2 == 0)) {
              *(undefined4 *)(local_158 + 0x20) = local_1a0;
            }
            param_1 = local_178;
            puVar4 = local_180;
            break;
          }
          local_1a8 = local_1a8 + 1;
        } while (*local_1a8 != (undefined *)0x0);
      }
      local_1b0 = local_1b0 - 1;
      puVar1 = local_1b8;
    }
  }
}



