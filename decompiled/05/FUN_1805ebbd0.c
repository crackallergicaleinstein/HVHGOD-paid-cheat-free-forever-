// FUN_1805ebbd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ebbd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805ebbd0(ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_1c8 [32];
  uint *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  uint local_188;
  uint local_184 [3];
  uint local_178 [20];
  byte local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  local_1a8 = &local_188;
  uVar5 = 0;
  local_188 = 0;
  local_184[0] = 0;
  local_1a0 = param_2;
  local_198 = param_3;
  uVar4 = FUN_1805ec060(local_128,0x100,local_178,local_184);
  if ((uVar4 < 0xffffffffffffff89) && (local_188 <= *param_1)) {
    uVar3 = 1;
    *param_1 = (ushort)local_188;
    uVar8 = 0;
    if (local_188 != 0) {
      do {
        uVar9 = local_178[uVar3];
        uVar4 = (ulonglong)uVar3;
        cVar2 = (char)uVar3;
        uVar3 = uVar3 + 1;
        local_178[uVar4] = uVar8;
        uVar8 = uVar8 + (uVar9 << (cVar2 - 1U & 0x1f));
      } while (uVar3 <= local_188);
    }
    if (local_184[0] != 0) {
      pbVar7 = local_128;
      do {
        bVar1 = *pbVar7;
        uVar8 = local_178[bVar1];
        uVar3 = (1 << (bVar1 & 0x1f)) >> 1;
        uVar9 = uVar8 + uVar3;
        if (uVar8 < uVar9) {
          puVar6 = param_1 + (ulonglong)uVar8 + 1;
          for (uVar4 = (ulonglong)uVar3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = CONCAT11(((char)local_188 - bVar1) + '\x01',(char)uVar5);
            puVar6 = puVar6 + 1;
          }
        }
        uVar5 = uVar5 + 1;
        local_178[bVar1] = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 < local_184[0]);
    }
  }
}



