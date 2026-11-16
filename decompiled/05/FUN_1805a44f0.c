// FUN_1805a44f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a44f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805a44f0(char *param_1,uint param_2,undefined4 param_3,longlong param_4,int *param_5)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 auStack_178 [32];
  int *local_158;
  byte local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  lVar2 = *(longlong *)(param_4 + 0xa0);
  local_158 = param_5;
  iVar6 = FUN_1805788b0(lVar2,param_3);
  pcVar10 = param_1;
  if (iVar6 == 0) {
    pbVar9 = local_148;
    cVar5 = '\x01';
    bVar3 = false;
    pbVar11 = local_148;
    if (param_1 < param_1 + param_2) {
      do {
        if (pbVar9 <= pbVar11) {
          uVar7 = FUN_1805780f0(lVar2);
          uVar8 = *(int *)(lVar2 + 8) - uVar7;
          if (uVar8 == 0) break;
          uVar12 = 0x100;
          if (uVar8 < 0x100) {
            uVar12 = uVar8;
          }
          iVar6 = FUN_180578100(lVar2,local_148,uVar12);
          if (iVar6 != 0) break;
          pbVar11 = local_148;
          uVar8 = FUN_1805780f0(lVar2);
          pbVar9 = local_148 + ((ulonglong)uVar8 - (ulonglong)uVar7);
        }
        bVar1 = *pbVar11;
        if (bVar1 - 0x30 < 10) {
          cVar4 = bVar1 - 0x30;
LAB_1805a4621:
          if (cVar5 == '\0') {
            *pcVar10 = *pcVar10 + cVar4;
            pcVar10 = pcVar10 + 1;
          }
          else {
            *pcVar10 = cVar4 << 4;
          }
          cVar5 = '\x01' - cVar5;
          if (bVar3) break;
        }
        else {
          if ((byte)(bVar1 + 0x9f) < 6) {
            cVar4 = bVar1 + 0xa9;
            goto LAB_1805a4621;
          }
          if ((byte)(bVar1 + 0xbf) < 6) {
            cVar4 = bVar1 - 0x37;
            goto LAB_1805a4621;
          }
          if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
            if (bVar1 == 0x3e) {
              cVar4 = '\0';
              bVar3 = true;
              goto LAB_1805a4621;
            }
            break;
          }
        }
        if (param_1 + param_2 <= pcVar10) break;
        pbVar11 = pbVar11 + 1;
      } while( true );
    }
  }
  *local_158 = (int)pcVar10 - (int)param_1;
}



