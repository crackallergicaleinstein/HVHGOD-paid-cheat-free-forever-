// FUN_180629870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180629870 */

void FUN_180629870(void)

{
  int iVar1;
  DWORD DVar2;
  UINT UVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_res8;
  undefined4 local_res10;
  int local_res18;
  
  puVar4 = (undefined8 *)FUN_180628ce8();
  puVar5 = (undefined8 *)FUN_180628cf0();
  iVar8 = 0;
  local_res8 = 0;
  local_res10 = 0;
  local_res18 = 0;
  iVar1 = FUN_180628d58();
  if (iVar1 == 0) {
    iVar1 = FUN_180628cf8();
    if (iVar1 == 0) {
      iVar1 = FUN_180628d28();
      if (iVar1 == 0) {
        FUN_180621380(DAT_180bb2588);
        DAT_180bb2588 = 0;
        DVar2 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_180bb25a0);
        if (DVar2 != 0xffffffff) {
          local_res8 = DAT_180bb25a0 * 0x3c;
          local_res10 = 1;
          DAT_180bb2590 = 1;
          if (DAT_180bb25e6 != 0) {
            local_res8 = DAT_180bb25f4 * 0x3c + local_res8;
          }
          if ((DAT_180bb263a == 0) || (DAT_180bb2648 == 0)) {
            local_res10 = 0;
          }
          else {
            iVar8 = (DAT_180bb2648 - DAT_180bb25f4) * 0x3c;
          }
          FUN_18063ab10(*puVar5,0,0x80);
          FUN_18063ab10(puVar5[1],0,0x80);
          FUN_18063ab10(*puVar4,0,0x40);
          FUN_18063ab10(puVar4[1],0,0x40);
          UVar3 = ___lc_codepage_func();
          FUN_180629b10(&DAT_180bb25a4,*puVar5,*puVar4,UVar3);
          FUN_180629b10(&DAT_180bb25f8,puVar5[1],puVar4[1],UVar3);
          local_res18 = iVar8;
        }
        piVar6 = (int *)FUN_180628ce0();
        *piVar6 = local_res8;
        puVar7 = (undefined4 *)FUN_180628cd0();
        *puVar7 = local_res10;
        piVar6 = (int *)FUN_180628cd8();
        *piVar6 = local_res18;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



