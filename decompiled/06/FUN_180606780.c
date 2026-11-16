// FUN_180606780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606780 */

undefined8
FUN_180606780(PEXCEPTION_RECORD param_1,PVOID param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  PEXCEPTION_RECORD local_38;
  undefined8 local_30;
  
  __except_validate_context_record(param_3);
  lVar2 = param_4[1];
  puVar3 = (uint *)param_4[7];
  uVar10 = *param_4 - lVar2;
  uVar8 = *(uint *)(param_4 + 9);
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_38 = param_1;
    local_30 = param_3;
    for (; uVar8 < *puVar3; uVar8 = uVar8 + 1) {
      uVar7 = (ulonglong)uVar8;
      if (((puVar3[uVar7 * 4 + 1] <= uVar10) && (uVar10 < puVar3[uVar7 * 4 + 2])) &&
         (puVar3[uVar7 * 4 + 4] != 0)) {
        if (puVar3[uVar7 * 4 + 3] != 1) {
          iVar4 = (*(code *)((ulonglong)puVar3[uVar7 * 4 + 3] + lVar2))(&local_38,param_2);
          if (iVar4 < 0) {
            return 0;
          }
          if (iVar4 < 1) goto LAB_1806068a7;
        }
        if ((param_1->ExceptionCode == 0xe06d7363) &&
           (iVar4 = FUN_1806361a0(&PTR_FUN_1806ad118), iVar4 != 0)) {
          FUN_1806064c0(param_1,1);
        }
        FUN_18060a1b0((ulonglong)puVar3[((ulonglong)uVar8 + 1) * 4] + lVar2,param_2,1);
        RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar3[((ulonglong)uVar8 + 1) * 4] + lVar2),param_1,
                    (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                    (PUNWIND_HISTORY_TABLE)param_4[8]);
        FUN_18060a1e0();
      }
LAB_1806068a7:
    }
  }
  else {
    uVar7 = param_4[4] - lVar2;
    for (; uVar1 = *puVar3, uVar8 < uVar1; uVar8 = uVar8 + 1) {
      uVar9 = (ulonglong)uVar8;
      if ((puVar3[uVar9 * 4 + 1] <= uVar10) && (uVar10 < puVar3[uVar9 * 4 + 2])) {
        if ((param_1->ExceptionFlags & 0x20) != 0) {
          uVar6 = 0;
          if (uVar1 != 0) {
            do {
              if ((((puVar3[uVar6 * 4 + 1] <= uVar7) && (uVar7 < puVar3[uVar6 * 4 + 2])) &&
                  (puVar3[uVar6 * 4 + 4] == puVar3[uVar9 * 4 + 4])) &&
                 (puVar3[uVar6 * 4 + 3] == puVar3[uVar9 * 4 + 3])) break;
              uVar5 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar5;
            } while (uVar5 < uVar1);
          }
          if ((uint)uVar6 != *puVar3) {
            return 1;
          }
        }
        if (puVar3[((ulonglong)uVar8 + 1) * 4] == 0) {
          *(uint *)(param_4 + 9) = uVar8 + 1;
          (*(code *)((ulonglong)puVar3[(ulonglong)uVar8 * 4 + 3] + lVar2))
                    (CONCAT71((int7)((ulonglong)uVar8 * 2 >> 8),1));
        }
        else if ((uVar7 == puVar3[((ulonglong)uVar8 + 1) * 4]) &&
                ((param_1->ExceptionFlags & 0x20) != 0)) {
          return 1;
        }
      }
    }
  }
  return 1;
}



