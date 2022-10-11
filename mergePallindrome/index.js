const sortStrMan = (s) => {
    a=  s.split("")
      for(let i=0;i<a.length;i++)
  {
    for(let j = 0;j<(a.length - i -1);j++)
    {
  if(a[j] > a[j+1])
  {
  
  
      let swap = a[j]
      a[j] = a[j+1]
      a[j+1] = swap
  }
    }
  
  }
  a=a.join("")
  return a
  }
  
  
  
  
  
  const getPallindrome = (s) => {
      let arr = s.split("")
      let pallindromeLetters = []
      let notPallindromeLetters = []
      let pallindrome = []
  for(let i=arr.length-1;i>0;i--)
  {

      if(arr[i] === arr[i-1])
      {

        pallindromeLetters.push(arr.pop())
        arr.pop()
        i--
        }
        else {
          notPallindromeLetters.push(arr.pop())
        }
  }
  console.log("pallindrome letters are "+ pallindromeLetters)
  console.log("Not pallindrome letters are "+ notPallindromeLetters)
  if(notPallindromeLetters.length >0)
    {
      let minLetter = notPallindromeLetters[0]
      for(let k =0 ;k<notPallindromeLetters.length;k++)
      {
        if(notPallindromeLetters[k] <minLetter)
        {
          minLetter = notPallindromeLetters[k]
        }
      }
      pallindrome.push(minLetter)
    }
    for(let k = 0;k<pallindromeLetters.length;k++)
    {
 pallindrome.unshift(pallindromeLetters[k])
 pallindrome.push(pallindromeLetters[k])
    }
return pallindrome.join("")
  }


let s1 = "bdfaacf"
let s2 = "ddefefrre"

//let testStr = "dftgerrfghbaaaaa"

// console.log(sortStrMan(testStr))

// testStr = sortStrMan(testStr)
// console.log(getPallindrome(testStr))

let sorted1 = sortStrMan(s1)
let sorted2 = sortStrMan(s2)

p1= getPallindrome(sorted1)
p2 = getPallindrome(sorted2)
let word =p1.concat(p2)
word = sortStrMan(word)
console.log(getPallindrome(word))