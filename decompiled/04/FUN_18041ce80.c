// FUN_18041ce80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041ce80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041ce80(short *param_1)

{
  uint uVar1;
  BOOLEAN BVar2;
  ulonglong uVar3;
  PRUNTIME_FUNCTION p_Var4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionTable;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  short *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if (((((param_1 != (short *)0x0) && (DAT_180c7d8a0 == (PRUNTIME_FUNCTION)0x0)) &&
       (*param_1 == 0x5a4d)) &&
      ((lVar5 = (longlong)*(int *)(param_1 + 0x1e), *(int *)(param_1 + 0x1e) - 0x40U < 0xfffc1 &&
       (*(int *)(lVar5 + (longlong)param_1) == 0x4550)))) &&
     ((*(short *)(lVar5 + 4 + (longlong)param_1) == -0x799c &&
      ((*(short *)(lVar5 + 0x18 + (longlong)param_1) == 0x20b &&
       (3 < *(uint *)(lVar5 + 0x84 + (longlong)param_1))))))) {
    uVar3 = *(ulonglong *)(lVar5 + 0xa0 + (longlong)param_1);
    uVar1 = *(uint *)(lVar5 + 0x50 + (longlong)param_1);
    if ((uVar1 - 1 < 0x40000000) &&
       ((((uVar7 = (uint)uVar3, uVar7 != 0 && (uVar7 < uVar1)) &&
         (uVar6 = (uint)(uVar3 >> 0x20), uVar6 != 0)) &&
        (((uVar6 <= uVar1 - uVar7 && (uVar8 = (uVar3 >> 0x20) / 0xc, uVar3 >> 0x20 == uVar8 * 0xc))
         && (FunctionTable = (PRUNTIME_FUNCTION)((uVar3 & 0xffffffff) + (longlong)param_1),
            uVar8 < 0xf4241)))))) {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar3 = 0;
        do {
          if (FunctionTable[uVar3].EndAddress <= FunctionTable[uVar3].BeginAddress) {
          }
          if (uVar1 < FunctionTable[uVar3].EndAddress) {
          }
          if (FunctionTable[uVar3].UnwindData == 0) {
          }
          if (uVar1 <= FunctionTable[uVar3].UnwindData) {
          }
          if ((uVar7 != 0) &&
             (FunctionTable[uVar3].BeginAddress < FunctionTable[uVar7 - 1].BeginAddress)) {
          }
          uVar7 = uVar7 + 1;
          uVar3 = (ulonglong)uVar7;
        } while (uVar3 < uVar8);
      }
      ControlPc = (ulonglong)FunctionTable->BeginAddress + (longlong)param_1;
      local_38 = 0;
      p_Var4 = RtlLookupFunctionEntry(ControlPc,&local_38,(PUNWIND_HISTORY_TABLE)0x0);
      if (p_Var4 == (PRUNTIME_FUNCTION)0x0) {
        BVar2 = RtlAddFunctionTable(FunctionTable,(DWORD)uVar8,(DWORD64)param_1);
        if (BVar2 != '\0') {
          local_30 = (short *)0x0;
          p_Var4 = RtlLookupFunctionEntry(ControlPc,(PDWORD64)&local_30,(PUNWIND_HISTORY_TABLE)0x0);
          if ((p_Var4 == (PRUNTIME_FUNCTION)0x0) || (local_30 != param_1)) {
            RtlDeleteFunctionTable(FunctionTable);
          }
          else {
            DAT_180c7d898 = (DWORD)uVar8;
            DAT_180c7d8a0 = FunctionTable;
            DAT_180c7d8a8 = uVar1;
            DAT_180c7d8b0 = param_1;
            DAT_180c7d890 = AddVectoredExceptionHandler(1,FUN_18041ce00);
            if (DAT_180c7d890 == (PVOID)0x0) {
              RtlDeleteFunctionTable(FunctionTable);
              DAT_180c7d8a0 = (PRUNTIME_FUNCTION)0x0;
              DAT_180c7d8a8 = 0;
              DAT_180c7d898 = 0;
              DAT_180c7d8b0 = (short *)0x0;
            }
          }
        }
      }
    }
  }
}



