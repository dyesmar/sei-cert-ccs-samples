// ARR30-C: Compliant Solution
HRESULT GetMachineName(
  wchar_t *pwszPath,
  wchar_t wszMachineName[MAX_COMPUTERNAME_LENGTH_FQDN+1])
{
  wchar_t *pwszServerName = wszMachineName;
  wchar_t *pwszTemp = pwszPath + 2;
  wchar_t *end_addr
    = pwszServerName + MAX_COMPUTERNAME_LENGTH_FQDN;
  while ((*pwszTemp != L'\\') &&
         (*pwszTemp != L'\0') &&
         (pwszServerName < end_addr))
  {
    *pwszServerName++ = *pwszTemp++;
  }
 
  /* ... */
}
