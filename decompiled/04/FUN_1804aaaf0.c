// FUN_1804aaaf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aaaf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804aaaf0(undefined *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  DWORD DVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  LPCSTR lpPathName;
  undefined1 *puVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined1 auStack_2d8 [32];
  undefined *local_2b8;
  undefined1 local_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 auStack_240 [16];
  CHAR local_228;
  char acStack_227 [511];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_2d8;
  local_2b8 = &DAT_180b0a570;
  iVar2 = FUN_1805f68d0(&DAT_180b0a570);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b0a5bc == 0x7fffffff) {
    DAT_180b0a5bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_18063ab10(&local_228,0,0x200);
  DVar3 = GetTempPathA(0x200,&local_228);
  if (DVar3 != 0) {
    local_290 = (undefined1  [16])0x0;
    local_280 = (undefined1  [16])0x0;
    lVar5 = -1;
    do {
      pcVar1 = acStack_227 + lVar5;
      lVar5 = lVar5 + 1;
    } while (*pcVar1 != '\0');
    FUN_18015ba30(local_290,&local_228);
    pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_290,"vesta\\imgui_ids.log",0x13);
    local_250 = *pauVar4;
    auStack_240 = pauVar4[1];
    *(undefined8 *)(pauVar4[1] + 8) = 0xf;
    (*pauVar4)[0] = 0;
    *(undefined8 *)pauVar4[1] = 0;
    FUN_18015c010(local_290);
    local_270 = (undefined1  [16])0x0;
    local_260 = (undefined1  [16])0x0;
    lVar5 = -1;
    do {
      lVar7 = lVar5 + 1;
      pcVar1 = acStack_227 + lVar5;
      lVar5 = lVar7;
    } while (*pcVar1 != '\0');
    FUN_18015ba30(local_270,&local_228,lVar7);
    pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_270,"vesta",5);
    local_2b0 = *pauVar4;
    auStack_2a0 = pauVar4[1];
    (*pauVar4)[0] = 0;
    *(undefined8 *)pauVar4[1] = 0;
    *(undefined8 *)(pauVar4[1] + 8) = 0xf;
    lpPathName = local_2b0;
    if (0xf < (ulonglong)auStack_2a0._8_8_) {
      lpPathName = (LPCSTR)local_2b0._0_8_;
    }
    CreateDirectoryA(lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
    FUN_18015c010(local_2b0);
    FUN_18015c010(local_270);
    puVar6 = local_250;
    if (0xf < (ulonglong)auStack_240._8_8_) {
      puVar6 = (undefined1 *)local_250._0_8_;
    }
    lVar5 = FUN_180618bec(puVar6,&DAT_180859598);
    if (lVar5 != 0) {
      puVar8 = &DAT_1808595bc;
      if (param_1 != (undefined *)0x0) {
        puVar8 = param_1;
      }
      FUN_1804a2540(lVar5,"window=%s id=0x%08X\n",puVar8,param_2);
      FUN_1806116f4(lVar5);
    }
    FUN_18015c010(local_250);
  }
  FUN_1805f68fc(&DAT_180b0a570);
}



