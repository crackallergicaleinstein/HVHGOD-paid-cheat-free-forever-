// FUN_1805f2af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f2af0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805f2af0(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 auStack_1c8 [32];
  uint *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_188;
  uint local_184;
  uint local_180 [2];
  uint local_178 [20];
  byte local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  local_1a8 = &local_184;
  uVar5 = 0;
  local_184 = 0;
  local_180[0] = 0;
  local_1a0 = param_2;
  local_198 = param_3;
  uVar4 = FUN_1805f2fe0(local_128,0x100,local_178,local_180);
  if ((uVar4 < 0xffffffffffffff89) && (uVar8 = *param_1, local_184 <= (uVar8 & 0xff) + 1)) {
    local_188._0_2_ = (ushort)(byte)uVar8;
    local_188._3_1_ = (undefined1)(uVar8 >> 0x18);
    local_188._0_3_ = CONCAT12((char)local_184,(ushort)local_188);
    uVar8 = 1;
    *param_1 = local_188;
    if (1 < local_184 + 1) {
      puVar6 = local_178;
      uVar3 = 0;
      do {
        puVar6 = puVar6 + 1;
        uVar10 = *puVar6;
        cVar2 = (char)uVar8;
        uVar8 = uVar8 + 1;
        *puVar6 = uVar3;
        uVar3 = uVar3 + (uVar10 << (cVar2 - 1U & 0x1f));
      } while (uVar8 < local_184 + 1);
    }
    if (local_180[0] != 0) {
      pbVar9 = local_128;
      do {
        bVar1 = *pbVar9;
        uVar8 = local_178[bVar1];
        uVar3 = (1 << (bVar1 & 0x1f)) >> 1;
        uVar10 = uVar8 + uVar3;
        if (uVar8 < uVar10) {
          puVar7 = (undefined2 *)((longlong)param_1 + (ulonglong)uVar8 * 2 + 4);
          for (uVar4 = (ulonglong)uVar3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = CONCAT11(((char)local_184 - bVar1) + '\x01',(char)uVar5);
            puVar7 = puVar7 + 1;
          }
        }
        uVar5 = uVar5 + 1;
        local_178[bVar1] = uVar10;
        pbVar9 = pbVar9 + 1;
      } while (uVar5 < local_180[0]);
    }
  }
}



