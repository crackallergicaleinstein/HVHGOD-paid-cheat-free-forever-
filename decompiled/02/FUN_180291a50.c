// FUN_180291a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180291a50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180291a50(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_658 [32];
  undefined **local_638;
  char *local_630;
  ulonglong local_628 [2];
  char local_618 [1544];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  if (uVar1 != 0) {
    puVar7 = &DAT_180c66040;
    do {
      LOCK();
      if (uVar1 == *puVar7) {
        *puVar7 = 0;
      }
      UNLOCK();
      puVar7 = puVar7 + 1;
    } while (puVar7 != (ulonglong *)&DAT_180c660c0);
    if (uVar1 != 1) {
      uVar8 = (uVar1 >> 0x15 ^ uVar1 >> 4) * 0xed5ad4bb;
      uVar9 = 0;
      do {
        uVar2 = *(ulonglong *)
                 (&DAT_180c65630 + (uVar9 + (byte)((byte)(uVar8 >> 0xb) ^ (byte)uVar8) & 0xff) * 8);
        if (uVar2 == 0) break;
        if (uVar2 == uVar1) {
          *(ulonglong *)
           (&DAT_180c65630 + (uVar9 + (byte)((byte)(uVar8 >> 0xb) ^ (byte)uVar8) & 0xff) * 8) = 1;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x100);
    }
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    bVar3 = false;
    if (uVar1 + 0x80 != 0) {
      local_628[0] = 0;
      cVar4 = FUN_1804514f0(local_628,uVar1 + 0x80,8);
      if (cVar4 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    uVar8 = local_628[0];
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    cVar4 = DAT_180c65538;
    lVar5 = DAT_180c65518;
    if (bVar3) {
      if (((uVar8 >> 0x3e & 1) == 0) && (DAT_180c65518 != 0)) {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        FUN_180298220(lVar5,0x10,uVar1);
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
      }
    }
    else {
      LOCK();
      DAT_180c65538 = '\x01';
      UNLOCK();
      if (cVar4 == '\0') {
        FUN_18063ab10(local_618,0,0x600);
        local_638 = (undefined **)uVar1;
        FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"phase=destroy object=0x%llx");
        local_638 = &PTR_180700558;
        if (local_618[0] != '\0') {
          local_638 = (undefined **)&DAT_1806bcfc0;
        }
        local_630 = local_618;
        FUN_1800f6900(2);
      }
    }
  }
}



