// FUN_180290750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180290750 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180290750(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  DWORD DVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_108 [72];
  DWORD *local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  undefined8 *local_a0;
  ulonglong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined1 *local_70;
  ulonglong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_b8 = ZEXT816(0x180b8e3d0);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar7 = FUN_1805f68d8(&DAT_180b8e3d0);
  if (iVar7 == 0) {
    if (DAT_180b8e41c == 0x7fffffff) {
      DAT_180b8e41c = 0x7ffffffe;
      goto LAB_1802907c6;
    }
    cVar13 = '\x01';
  }
  else {
LAB_1802907c6:
    cVar13 = '\0';
  }
  local_b8[8] = cVar13;
  if (cVar13 != '\0') {
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (puVar5 = (undefined8 *)*puVar4; puVar5 != puVar4; puVar5 = (undefined8 *)*puVar5) {
      puVar1 = puVar5 + 3;
      local_68 = 0;
      uVar11 = 1;
      do {
        uVar12 = uVar11;
        if (puVar1[local_68 * 4 + 1] == local_res10) {
          if ((((local_res20 == 0) || (*(char *)(puVar1 + local_68 * 4 + 3) == '\0')) ||
              (DAT_180cb15f8 == '\0')) ||
             (*(float *)((longlong)puVar5 + local_68 * 4 + 0xa0) <= 0.0)) goto LAB_180290980;
          lVar6 = puVar5[2];
          lVar9 = FUN_1803d4150(puVar4,*(undefined4 *)puVar1);
          if (lVar9 != lVar6) goto LAB_180290980;
          DVar8 = GetCurrentThreadId();
          local_c0 = (DWORD *)0x0;
          if (DVar8 == 0) goto LAB_1802908e8;
          uVar11 = 0;
          goto LAB_1802908c0;
        }
        uVar11 = uVar12 + 1;
        local_68 = uVar12;
      } while (uVar12 < 4);
    }
  }
LAB_180290980:
  if (cVar13 != '\0') {
    FUN_1805f68fc(&DAT_180b8e3d0);
  }
  while (uVar10 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar10, uVar10 < 0x40) {
LAB_1802908c0:
    pDVar2 = &DAT_180c660c0 + uVar11;
    LOCK();
    DVar3 = *pDVar2;
    if (DVar3 == 0) {
      *pDVar2 = DVar8;
    }
    UNLOCK();
    if (DVar3 == 0) {
      LOCK();
      *(longlong *)(&DAT_180c65e40 + uVar11 * 8) = lVar6;
      UNLOCK();
      LOCK();
      DAT_180c65e3c = DAT_180c65e3c + 1;
      UNLOCK();
      local_c0 = pDVar2;
      break;
    }
  }
LAB_1802908e8:
  pDVar2 = local_c0;
  if (local_c0 != (DWORD *)0x0) {
    local_60 = &DAT_180cb1660;
    local_58 = &DAT_180cb1768;
    local_50 = &DAT_180cb1870;
    local_a8 = &local_60;
    local_98 = &local_68;
    local_90 = &local_res18;
    local_88 = &local_res20;
    local_80 = &param_5;
    local_78 = &local_res10;
    local_70 = &param_6;
    local_a0 = puVar1;
    FUN_180297340(&local_60,&local_60,&local_a8);
    LOCK();
    *(undefined8 *)(&DAT_180c65e40 + ((longlong)(pDVar2 + -0x60319830) >> 2) * 8) = 0;
    UNLOCK();
    *pDVar2 = 0;
    LOCK();
    DAT_180c65e3c = DAT_180c65e3c + -1;
    UNLOCK();
  }
  goto LAB_180290980;
}



