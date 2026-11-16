// FUN_18041b270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041b270 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18041b270(undefined8 *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  BOOL BVar4;
  longlong lVar5;
  undefined8 *******pppppppuVar6;
  ulonglong uVar7;
  undefined8 *******pppppppuVar8;
  DWORD nNumberOfBytesToWrite;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  LARGE_INTEGER liDistanceToMove;
  undefined1 auStackY_c8 [32];
  undefined8 *******local_98 [2];
  int local_88;
  undefined4 uStack_84;
  ulonglong local_80;
  DWORD local_78;
  DWORD local_74;
  LARGE_INTEGER local_70;
  _BY_HANDLE_FILE_INFORMATION local_68;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStackY_c8;
  local_68.dwFileAttributes = 0;
  local_68.ftCreationTime.dwLowDateTime = 0;
  local_68.ftCreationTime.dwHighDateTime = 0;
  local_68.ftLastAccessTime.dwLowDateTime = 0;
  local_68.ftLastAccessTime.dwHighDateTime = 0;
  local_68.ftLastWriteTime.dwLowDateTime = 0;
  local_68.ftLastWriteTime.dwHighDateTime = 0;
  local_68.dwVolumeSerialNumber = 0;
  local_68.nFileSizeHigh = 0;
  local_68.nFileSizeLow = 0;
  local_68.nNumberOfLinks = 0;
  local_68.nFileIndexHigh = 0;
  local_68.nFileIndexLow = 0;
  BVar4 = GetFileInformationByHandle(*(HANDLE *)*param_1,&local_68);
  if (BVar4 == 0) {
  }
  if (local_68.nNumberOfLinks != 1) {
  }
  if (((ulonglong)local_68.dwFileAttributes & 0x410) != 0) {
  }
  local_70.QuadPart = 0;
  BVar4 = GetFileSizeEx(*(HANDLE *)*param_1,&local_70);
  if (BVar4 == 0) {
  }
  if (local_70.QuadPart == 0) {
  }
  uVar12 = local_70.QuadPart & 0xffffffff;
  if (0xfffff < local_70.QuadPart) {
    uVar12 = 0xfffff;
  }
  liDistanceToMove.QuadPart = local_70.QuadPart - uVar12;
  BVar4 = SetFilePointerEx(*(HANDLE *)*param_1,liDistanceToMove,(PLARGE_INTEGER)0x0,0);
  if (BVar4 == 0) {
  }
  FUN_18015ae30(local_98,uVar12,0);
  local_78 = 0;
  pppppppuVar8 = local_98;
  if (0xf < local_80) {
    pppppppuVar8 = local_98[0];
  }
  BVar4 = ReadFile(*(HANDLE *)*param_1,pppppppuVar8,(DWORD)uVar12,&local_78,(LPOVERLAPPED)0x0);
  if ((BVar4 == 0) || (local_78 != (DWORD)uVar12)) {
    FUN_18015c010(local_98);
  }
  bVar1 = false;
  uVar7 = 0;
  uVar9 = CONCAT44(uStack_84,local_88);
  uVar10 = local_80;
  pppppppuVar8 = local_98[0];
  if (uVar9 != 0) {
    do {
      pppppppuVar6 = local_98;
      if (0xf < uVar10) {
        pppppppuVar6 = pppppppuVar8;
      }
      if (*(char *)((longlong)pppppppuVar6 + uVar7) == '\r') {
        if (uVar7 + 1 != uVar9) {
          pppppppuVar6 = local_98;
          if (0xf < uVar10) {
            pppppppuVar6 = pppppppuVar8;
          }
          if (*(char *)((longlong)pppppppuVar6 + uVar7 + 1) == '\n') goto LAB_18041b413;
        }
        pppppppuVar6 = local_98;
        if (0xf < uVar10) {
          pppppppuVar6 = pppppppuVar8;
        }
        *(undefined1 *)((longlong)pppppppuVar6 + uVar7) = 10;
        bVar1 = true;
        uVar9 = CONCAT44(uStack_84,local_88);
        uVar10 = local_80;
        pppppppuVar8 = local_98[0];
      }
LAB_18041b413:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  pppppppuVar6 = local_98;
  if (0xf < uVar10) {
    pppppppuVar6 = pppppppuVar8;
  }
  uVar7 = 0;
  if (uVar9 != 0) {
    lVar5 = thunk_FUN_1805f7e70(pppppppuVar6,uVar9 + (longlong)pppppppuVar6,10);
    uVar7 = CONCAT44(uStack_84,local_88);
    uVar10 = local_80;
    pppppppuVar8 = local_98[0];
    if (lVar5 != uVar9 + (longlong)pppppppuVar6) {
      lVar5 = lVar5 - (longlong)pppppppuVar6;
      goto LAB_18041b45f;
    }
  }
  lVar5 = -1;
LAB_18041b45f:
  if (liDistanceToMove.QuadPart == 0) {
    uVar9 = 0;
  }
  else if (lVar5 == -1) {
    uVar9 = uVar7;
  }
  else {
    uVar9 = lVar5 + 1;
  }
  pppppppuVar6 = local_98;
  if (0xf < uVar10) {
    pppppppuVar6 = pppppppuVar8;
  }
  if ((uVar7 == 0) || (*(char *)((uVar7 - 1) + (longlong)pppppppuVar6) != '\n')) {
    FUN_18015af80(local_98,CONCAT71((int7)(uVar7 >> 8),10));
    uVar7 = CONCAT44(uStack_84,local_88);
    uVar10 = local_80;
    pppppppuVar8 = local_98[0];
  }
  iVar11 = 0;
  uVar3 = uVar7;
  do {
    uVar2 = uVar3 - 1;
    if (uVar2 <= uVar9) goto LAB_18041b4ed;
    pppppppuVar6 = local_98;
    if (0xf < uVar10) {
      pppppppuVar6 = pppppppuVar8;
    }
    lVar5 = uVar3 - 2;
    uVar3 = uVar2;
  } while ((*(char *)((longlong)pppppppuVar6 + lVar5) != '\n') ||
          (iVar11 = iVar11 + 1, iVar11 != 1000));
  uVar9 = uVar2;
LAB_18041b4ed:
  if ((((uVar9 != 0) || (liDistanceToMove.QuadPart != 0)) || (bVar1)) || (uVar7 != uVar12)) {
    BVar4 = SetFilePointerEx(*(HANDLE *)*param_1,(LARGE_INTEGER)0x0,(PLARGE_INTEGER)0x0,0);
    if (BVar4 == 0) {
      FUN_18015c010(local_98);
    }
    else {
      local_74 = 0;
      nNumberOfBytesToWrite = local_88 - (int)uVar9;
      pppppppuVar8 = local_98;
      if (0xf < local_80) {
        pppppppuVar8 = local_98[0];
      }
      BVar4 = WriteFile(*(HANDLE *)*param_1,(LPCVOID)((longlong)pppppppuVar8 + uVar9),
                        nNumberOfBytesToWrite,&local_74,(LPOVERLAPPED)0x0);
      if ((BVar4 != 0) && (local_74 == nNumberOfBytesToWrite)) {
        SetEndOfFile(*(HANDLE *)*param_1);
      }
      FUN_18015c010(local_98);
    }
  }
  else {
    FUN_18015c010(local_98);
  }
}



