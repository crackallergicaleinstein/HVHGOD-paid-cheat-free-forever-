// FUN_180610cd8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180610cd8 */

ulonglong FUN_180610cd8(undefined1 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       FILE *param_5)

{
  uint *puVar1;
  FILE *_File;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  _File = param_5;
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (undefined1 *)0x0) {
LAB_180610d11:
    puVar3 = (undefined4 *)FUN_18060fe00();
    *puVar3 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) || (0xffffffffffffffff / param_3 < param_4)) {
      if (param_2 != 0xffffffffffffffff) {
        FUN_18063ab10(param_1,0,param_2);
      }
      if ((param_5 == (FILE *)0x0) || (0xffffffffffffffff / param_3 < param_4)) goto LAB_180610d11;
    }
    if (((ulonglong)param_5->_base & 0x4c000000000) == 0) {
      uVar4 = 0x1000;
    }
    else {
      uVar4 = (ulonglong)(uint)param_5->_charbuf;
    }
    param_5._0_4_ = (uint)uVar4;
    uVar6 = param_3 * param_4;
    uVar5 = param_2;
    puVar7 = param_1;
    while( true ) {
      if (uVar6 == 0) {
        return param_4;
      }
      if (((ulonglong)_File->_base & 0x4c000000000) == 0) break;
      uVar8 = *(uint *)&_File->_base;
      if (uVar8 == 0) break;
      if ((int)uVar8 < 0) {
LAB_180610f26:
        LOCK();
        puVar1 = (uint *)((longlong)&_File->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
LAB_180610f32:
        return (param_3 * param_4 - uVar6) / param_3;
      }
      if (uVar6 < (ulonglong)(longlong)(int)uVar8) {
        uVar8 = (uint)uVar6;
      }
      if (uVar5 < uVar8) goto LAB_180610f03;
      if (uVar8 != 0) {
        if (puVar7 != (undefined1 *)0x0) {
          if (_File->_ptr != (char *)0x0) {
            FUN_18063aed0(puVar7);
            goto LAB_180610e28;
          }
          FUN_18063ab10(puVar7,0,uVar5);
        }
        puVar3 = (undefined4 *)FUN_18060fe00();
        *puVar3 = 0x16;
        FUN_18060aad4();
      }
LAB_180610e28:
      *(uint *)&_File->_base = *(int *)&_File->_base - uVar8;
      uVar4 = (ulonglong)uVar8;
      _File->_ptr = _File->_ptr + uVar8;
LAB_180610e41:
      uVar6 = uVar6 - uVar4;
      puVar7 = puVar7 + uVar4;
      uVar5 = uVar5 - uVar4;
LAB_180610ee8:
      uVar4 = (ulonglong)(uint)param_5;
    }
    if (uVar6 < uVar4) {
      iVar2 = FUN_1806227ac(_File);
      if (iVar2 == -1) goto LAB_180610f32;
      if (uVar5 != 0) {
        *puVar7 = (char)iVar2;
        uVar6 = uVar6 - 1;
        param_5._0_4_ = _File->_charbuf;
        puVar7 = puVar7 + 1;
        uVar5 = uVar5 - 1;
        goto LAB_180610ee8;
      }
    }
    else {
      uVar9 = uVar6 & 0xffffffff;
      if (0x7fffffff < uVar6) {
        uVar9 = 0x7fffffff;
      }
      if ((int)uVar4 != 0) {
        uVar9 = (ulonglong)(uint)((int)uVar9 - (int)(uVar9 % uVar4));
      }
      if (uVar9 <= uVar5) {
        *(undefined4 *)&_File->_base = 0;
        _File->_ptr = *(char **)&_File->_cnt;
        iVar2 = _fileno(_File);
        iVar2 = FUN_180626c00(iVar2,puVar7,uVar9);
        if (iVar2 == 0) {
          LOCK();
          puVar1 = (uint *)((longlong)&_File->_base + 4);
          *puVar1 = *puVar1 | 8;
          UNLOCK();
          goto LAB_180610f32;
        }
        if (-1 < iVar2) {
          uVar4 = (ulonglong)iVar2;
          goto LAB_180610e41;
        }
        goto LAB_180610f26;
      }
    }
LAB_180610f03:
    if (param_2 != 0xffffffffffffffff) {
      FUN_18063ab10(param_1,0,param_2);
    }
    puVar3 = (undefined4 *)FUN_18060fe00();
    *puVar3 = 0x22;
  }
  FUN_18060aad4();
  return 0;
}



