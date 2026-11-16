// FUN_180610a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180610a20 */

ulonglong FUN_180610a20(char *param_1,ulonglong param_2,ulonglong param_3,FILE *param_4,
                       longlong param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (char *)0x0 && (param_3 <= 0xffffffffffffffff / param_2)))) {
      if (((ulonglong)param_4->_base & 0x4c000000000) == 0) {
        uVar8 = 0x1000;
      }
      else {
        uVar8 = param_4->_charbuf;
      }
      uVar6 = param_2 * param_3;
      do {
        if (uVar6 == 0) {
          return param_3;
        }
        if ((((ulonglong)param_4->_base & 0xc000000000) == 0) || (*(int *)&param_4->_base == 0)) {
          if (uVar8 <= uVar6) {
            if ((((ulonglong)param_4->_base & 0xc000000000) != 0) &&
               (iVar2 = FUN_180610058(param_4), iVar2 != 0)) goto LAB_180610bd7;
            uVar4 = uVar6;
            if (uVar8 != 0) {
              uVar4 = uVar6 - uVar6 % (ulonglong)uVar8;
            }
            uVar7 = 0xfffffffe;
            if (uVar4 < 0xfffffffe) {
              uVar7 = (uint)uVar4;
            }
            iVar2 = _fileno(param_4);
            uVar3 = FUN_180625bbc(iVar2,param_1,uVar7,param_5);
            if (uVar3 != 0xffffffff) {
              uVar5 = uVar3;
              if (uVar7 < uVar3) {
                uVar5 = uVar7;
              }
              uVar4 = (ulonglong)uVar5;
              uVar6 = uVar6 - uVar4;
              if (uVar7 <= uVar3) goto LAB_180610c1e;
            }
LAB_180610bd2:
            LOCK();
            puVar1 = (uint *)((longlong)&param_4->_base + 4);
            *puVar1 = *puVar1 | 0x10;
            UNLOCK();
LAB_180610bd7:
            return (param_2 * param_3 - uVar6) / param_2;
          }
          iVar2 = FUN_1806264e8((int)*param_1,param_4,param_5);
          if (iVar2 == -1) goto LAB_180610bd7;
          uVar8 = param_4->_charbuf;
          uVar6 = uVar6 - 1;
          if ((int)uVar8 < 1) {
            uVar8 = 1;
            uVar4 = 1;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          if (*(int *)&param_4->_base < 0) goto LAB_180610bd2;
          if (((ulonglong)param_4->_base & 0x100000000) != 0) goto LAB_180610bd7;
          uVar4 = uVar6;
          if ((ulonglong)(longlong)*(int *)&param_4->_base <= uVar6) {
            uVar4 = (longlong)*(int *)&param_4->_base;
          }
          FUN_18063aed0(param_4->_ptr,param_1,uVar4);
          *(int *)&param_4->_base = *(int *)&param_4->_base - (int)uVar4;
          uVar6 = uVar6 - uVar4;
          param_4->_ptr = param_4->_ptr + uVar4;
        }
LAB_180610c1e:
        param_1 = param_1 + uVar4;
      } while( true );
    }
    *(undefined1 *)(param_5 + 0x30) = 1;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    FUN_18060aa1c(0,0,0,0,0,param_5);
  }
  return 0;
}



